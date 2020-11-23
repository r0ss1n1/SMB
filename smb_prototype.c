#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <synchapi.h>

#pragma comment(lib, "ws2_32.lib")

int main(void) {

	/* NTLMSSP_AUTH fails / SessionID needs to be kept on both sides */

	/* Charles Thomas Wallace Truscott @r0ss1n1 github.com/r0ss1n1 */

	/* Shout out to former DG ASIO/ASIS David Taylor Irvine AO */

	WSADATA wsaData;
	int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
	int PACKET_1[74];
	memset(PACKET_1, "\x00\x00\x00\x45\xff\x53\x4d\x42\x72\x00\x00\x00\x00\x18\x53\xc8\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xfe\x00\x00\x00\x00\x00\x22\x00\x02\x4e\x54\x20\x4c\x4d\x20\x30\x2e\x31\x32\x00\x02\x53\x4d\x42\x20\x32\x2e\x30\x30\x32\x00\x02\x53\x4d\x42\x20\x32\x2e\x3f\x3f\x3f\x00", 1);
	int PACKET_2[179];
	memset(PACKET_2, "\x00\x00\x00\xae\xfe\x53\x4d\x42\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xff\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x24\x00\x05\x00\x01\x00\x00\x00\x7f\x00\x00\x00\x4e\x36\x0c\x5c\x33\x00\xeb\x11\xab\x4e\x00\x22\x19\xa2\xc3\xe0\x70\x00\x00\x00\x02\x00\x00\x00\x02\x02\x10\x02\x00\x03\x02\x03\x11\x03\x00\x00\x01\x00\x26\x00\x00\x00\x00\x00\x01\x00\x20\x00\x01\x00\x73\x14\x06\x5d\xc1\xa5\x87\x3b\xcc\xe0\x0e\x88\xef\x89\x80\x26\xb9\x85\xa9\x42\xf9\x0e\x07\xbc\xf0\x9e\xf5\x76\x1e\xb5\xe0\xcd\x00\x00\x02\x00\x06\x00\x00\x00\x00\x00\x02\x00\x02\x00\x01\x00", 1);
	char * PACKET_3 = "\x00\x00\x00\xdd\xfe\x53\x4d\x42\x40\x00\x01\x00\x00\x00\x00\x00\x01\x00\x21\x00\x10\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xff\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x19\x00\x00\x01\x01\x00\x00\x00\x00\x00\x00\x00\x58\x00\x85\x00\x00\x00\x00\x00\x00\x00\x00\x00\x60\x81\x82\x06\x06\x2b\x06\x01\x05\x05\x02\xa0\x78\x30\x76\xa0\x30\x30\x2e\x06\x0a\x2b\x06\x01\x04\x01\x82\x37\x02\x02\x0a\x06\x09\x2a\x86\x48\x82\xf7\x12\x01\x02\x02\x06\x09\x2a\x86\x48\x86\xf7\x12\x01\x02\x02\x06\x0a\x2b\x06\x01\x04\x01\x82\x37\x02\x02\x1e\xa2\x42\x04\x40\x4e\x54\x4c\x4d\x53\x53\x50\x00\x01\x00\x00\x00\x97\xb2\x08\xe2\x09\x00\x09\x00\x37\x00\x00\x00\x0f\x00\x0f\x00\x28\x00\x00\x00\x0a\x00\x63\x45\x00\x00\x00\x0f\x57\x49\x4e\x2d\x37\x43\x45\x4e\x4e\x30\x47\x32\x34\x33\x31\x57\x4f\x52\x4b\x47\x52\x4f\x55\x50";
	char * PACKET_4 = "\x00\x00\x00\xd1\xfe\x53\x4d\x42\x40\x00\x01\x00\x00\x00\x00\x00\x01\x00\x41\x00\x10\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\xff\xfe\x00\x00\x00\x00\x00\x00\x59\x00\x00\xd4\x0a\x28\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x19\x00\x00\x01\x01\x00\x00\x00\x00\x00\x00\x00\x58\x00\x79\x00\x00\x00\x00\x00\x00\x00\x00\x00\xa1\x77\x30\x75\xa0\x03\x0a\x01\x01\xa2\x5a\x04\x58\x4e\x54\x4c\x4d\x53\x53\x50\x00\x03\x00\x00\x00\x00\x00\x00\x00\x58\x00\x00\x00\x00\x00\x00\x00\x58\x00\x00\x00\x00\x00\x00\x00\x58\x00\x00\x00\x00\x00\x00\x00\x58\x00\x00\x00\x00\x00\x00\x00\x58\x00\x00\x00\x00\x00\x00\x00\x58\x00\x00\x00\x15\xc2\x88\xe2\x0a\x00\x63\x45\x00\x00\x00\x0f\x5d\x83\xbb\x8a\x79\x64\x88\xbc\x4d\x70\xb8\xd1\x2b\xdd\x05\x12\xa3\x12\x04\x10\x01\x00\x00\x00\xbd\x96\x7c\x12\x84\x6a\x4f\xbd\x00\x00\x00\x00";
	char * PACKET_5 = "\x00\x00\x00\x76\xfe\x53\x4d\x42\x40\x00\x01\x00\x00\x00\x00\x00\x03\x00\x09\x00\x18\x00\x00\x00\x00\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\xff\xfe\x00\x00\x00\x00\x00\x00\x59\x00\x00\xd4\x0a\x28\x00\x00\x8d\x1e\x33\xe6\x0a\x2d\x6f\xa9\x70\xcb\xad\xc6\x65\xcf\x49\x3a\x09\x00\x00\x00\x48\x00\x2e\x00\x5c\x00\x5c\x00\x57\x00\x69\x00\x6e\x00\x2d\x00\x37\x00\x63\x00\x65\x00\x6e\x00\x6e\x00\x30\x00\x67\x00\x32\x00\x34\x00\x33\x00\x31\x00\x5c\x00\x73\x00\x68\x00\x61\x00\x72\x00\x65\x00";
	char PACKET_RECV[4096] = "";
	SOCKET SMB_CONNECTION;
	SMB_CONNECTION = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	struct sockaddr_in SMB_DEETS;
	for(int i = 0; i < 73; ++i){
		printf("%x", PACKET_1[i]);
	}
	printf("\n");
	for(int i = 0; i < 178; ++i){
		printf("%x", PACKET_2[i]);
	}
	printf("\n\n");
	SMB_DEETS.sin_family = AF_INET;
	SMB_DEETS.sin_addr.s_addr = inet_addr("127.0.0.1");
	SMB_DEETS.sin_port = htons(445);
	result = connect(SMB_CONNECTION, (SOCKADDR *) &SMB_DEETS, sizeof(SMB_DEETS));
	if(result == SOCKET_ERROR) {
		printf("socket error: %ld", WSAGetLastError());
		closesocket(SMB_CONNECTION);
	}
	Sleep(3000);
	result = send(SMB_CONNECTION,(char *) PACKET_1, 73, 0);
	printf("sent %d bytes\n", result);
	Sleep(3000);
	result = shutdown(SMB_CONNECTION, SD_SEND);
	Sleep(3000);
	do {
		result = recv(SMB_CONNECTION, PACKET_RECV, 73, 0);
		if(result > 0) {
			printf("%s", PACKET_RECV);
			printf("bytes received: %d\n", result);
		} else if ( result == 0 ) {
			printf("connection closed\n");
		} else {
			printf("recv failed\n");
		}

	} while( result > 0 );

	closesocket(SMB_CONNECTION);

}