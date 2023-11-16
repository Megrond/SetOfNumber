#include<iostream>
#include<Windows.h>
#include"SetOfNumber.h"

using namespace std;
//https://github.com/OdegovTop/Sets/tree/master/Sets

int main()
{

	uint32_t temp[] = { 1, 1, 1, 1, 1, 1, 2, 3 };
	SetOfNumber x{ 8, temp };

	x.show();
	std::cout << std::endl;

	x += 10;

	x.show();
	std::cout << std::endl;

	SetOfNumber y = x + 12;
	++y;

	y.show();
	std::cout << std::endl;

	y++;
	y.show();
	std::cout << std::endl;


	x += y;
	x.show();
	std::cout << std::endl;


	uint32_t temp2[] = { 100,200,400 };
	SetOfNumber z{ 3, temp2 };

	SetOfNumber zx = z + x;
	zx.show();
	std::cout << std::endl;

	zx -= 14;
	zx.show();
	std::cout << std::endl;

	SetOfNumber yz = zx - 200;
	zx.show();
	std::cout << std::endl;
	yz.show();
	std::cout << std::endl;

	return 0;
}