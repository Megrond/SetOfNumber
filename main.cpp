#include<iostream>
#include<Windows.h>
#include"SetOfNumber.h"

using namespace std;
//https://github.com/OdegovTop/Sets/tree/master/Sets

int main()
{
	SetConsoleOutputCP(1251);

	uint32_t temp[] = { 1,1,1,1,1,1,2,3 };
	SetOfNumber x{ 8,temp };

	x.show();
	cout << endl;

	x += 10;
	//cout << "\t|x += 10|" << endl;
	x.show();
	cout << endl;


	SetOfNumber y = x + 12;
	++y;
	//cout << "\t|++y|" << endl;
	y.show();
	cout << endl;

	y++;
	//cout << "\t|y++|" << endl;
	y.show();
	cout << endl;

	x += y;
	//cout << "\t|x += y|" << endl;
	x.show();
	cout << endl;

	uint32_t temp2[] = { 100,200,400 };
	SetOfNumber z{ 3,temp2 };

	SetOfNumber zx = z + x;
	//cout << "\t|zxy|" << endl;
	zx.show();
	cout << endl;

	zx -= 14;
	//cout << "\t|zx -= 200|" << endl;
	zx.show();
	cout << endl;

	SetOfNumber yz = zx - 200;
	//cout << "\t|zxy|" << endl;
	yz.show();
	cout << endl;





	return 0;
}