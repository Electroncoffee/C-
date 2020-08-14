#include <iostream>
#include "point.h"
using namespace std;

point::point(int xpos, int ypos)
{
	x = xpos;
	y = ypos;
}

int point::GetX() const
{
	return x;
}

int point::GetY() const
{
	return y;
}

//액세스 함수(사용되지는 않지만 필요할 수 있다고 판단되는 함수)
bool point::SetX(int xpos)
{
	if (0 < xpos || xpos < 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool point::SetY(int ypos)
{
	if (0 < ypos || ypos < 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = ypos;
	return true;
}