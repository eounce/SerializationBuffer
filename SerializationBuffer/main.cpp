#include <stdio.h>
#include <string>
#include <Windows.h>
#include <conio.h>
#include "Message.h"

int wmain()
{
	int num1;
	float flo1;
	double dou1;
	WCHAR ch1;
	int a1;

	int num2;
	float flo2;
	double dou2;
	WCHAR ch2;
	int a2;

	int count = 10000000;
	while (count--)
	{
		num1 = rand() % 100 + 1;
		flo1 = rand() % 100 / 2.5f;
		dou1 = rand() % 100 / 3.2f;
		ch1 = rand() % 255;
		a1 = rand() % 1000 + 1;

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