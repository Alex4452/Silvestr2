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
		if (lpReserved)  // Определение способа загрузки
			printf("DLL загружена с неявной компоновкой \n");
		else
			printf("DLL загружена с явной компоновкой \n");
		return 1; // успешная инициализация
		break;
    case DLL_THREAD_ATTACH:
		printf("Отключение DLL\n");
		break;
    case DLL_THREAD_DETACH:
		printf("Создание процессом нового потока\n");
		break;
    case DLL_PROCESS_DETACH:
		printf("Завершение потока\n");
		break;
    }
    return TRUE;
}

