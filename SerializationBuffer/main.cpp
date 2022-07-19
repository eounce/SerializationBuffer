#include <stdio.h>
#include <string>
#include <Windows.h>
#include <conio.h>
#include "Message.h"

int wmain()
{
	int num1 = 10;
	float flo1 = 20.2f;
	double dou1 = 20.3;
	WCHAR ch1 = L'a';
	int a1 = 2020;

	int num2;
	float flo2;
	double dou2;
	WCHAR ch2;
	int a2;

	int count = 10000000;
	while (count--)
	{
		Message msg;
		msg << num1;
		msg << dou1;
		msg << flo1;
		msg << ch1;
		msg << a1;

		msg >> num2;
		msg >> dou2;
		msg >> flo2;
		msg >> ch2;
		msg >> a2;
		
		if (num1 == num2 && dou1 == dou2 && flo1 == flo2 && ch1 == ch2 && a1 == a2)
			wprintf(L"true\n");
		else
		{
			wprintf(L"false\n");
			break;
		}
	}
	return 0;
}