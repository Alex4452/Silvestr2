// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <cstdio>
#include <Windows.h>
#include "TestDLLPlus.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
	setlocale(0, "Rus");
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		if (lpReserved)  // ����������� ������� ��������
			printf("DLL ��������� � ������� ����������� \n");
		else
			printf("DLL ��������� � ����� ����������� \n");
		return 1; // �������� �������������
		break;
    case DLL_THREAD_ATTACH:
		printf("���������� DLL\n");
		break;
    case DLL_THREAD_DETACH:
		printf("�������� ��������� ������ ������\n");
		break;
    case DLL_PROCESS_DETACH:
		printf("���������� ������\n");
		break;
    }
    return TRUE;
}

