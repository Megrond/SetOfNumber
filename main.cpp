#include<iostream>
#include<Windows.h>
#include"SetOfNumber.h"

using namespace std;
//https://github.com/OdegovTop/Sets/tree/master/Sets

int main()
{

	uint32_t temp[] = { 1, 1, 1, 1, 1, 1, 2, 3 };
	SetOfNumber x{ 8, temp };

	std::cout << x << std::endl;

	x += 10;
	std::cout << x << std::endl;

	SetOfNumber y = x + 12;
	++y;
	std::cout << y << std::endl;

	y++;
	std::cout << y << std::endl;

	x += y;
	std::cout << x << std::endl;

	uint32_t temp2[] = { 100,200,400 };
	SetOfNumber z{ 3, temp2 };

	SetOfNumber zx = z + x;
	std::cout << zx << std::endl;

	zx -= 14;
	std::cout << zx << std::endl;

	{
		SetOfNumber yz = zx - 200;
		std::cout << zx << std::endl;
		std::cout << yz << std::endl;

		zx = yz;
	}
	std::cout << zx << std::endl;
	

	return 0;
}