#include <Windows.h>
#include <iostream>
#include "SetOfNumber.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "RU");

	uint32_t temp[] = { 1,2,3,1,1,1 };
	SetOfNumber x{6, temp};

	x.show();


	return 0;
};