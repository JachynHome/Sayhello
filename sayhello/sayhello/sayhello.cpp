#include <windows.h>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, PSTR szCmdLine, int iCmdShow) {
	MessageBox(NULL, TEXT("我的第一个win程序。"), TEXT("SayHello"), MB_OK);
	return 0;
}