// regTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	HKEY regHandle;
	DWORD dw;
	HKEY regOpenHandle;
	DWORD dwYan  = 0xff;
	if (ERROR_SUCCESS == RegCreateKeyEx(HKEY_LOCAL_MACHINE,_T("Software\\yan"),NULL,0,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS|KEY_WOW64_64KEY,NULL,&regHandle,&dw))
	{
		printf("RegCreateKeyEx 执行成功\n");
	}
	else
	{
		printf("RegCreateKeyEx 执行失败\n");
	}
	RegOpenKeyEx(HKEY_LOCAL_MACHINE,_T("Software\\yan"),NULL,KEY_ALL_ACCESS|KEY_WOW64_64KEY,&regOpenHandle);
	RegSetValueEx(regOpenHandle,_T("helloworld"),NULL,REG_DWORD,(const unsigned char*)&dwYan,sizeof(DWORD));
	system("pause");
	return 0;
}
