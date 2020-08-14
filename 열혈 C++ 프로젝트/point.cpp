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

//�׼��� �Լ�(�������� ������ �ʿ��� �� �ִٰ� �ǴܵǴ� �Լ�)
bool point::SetX(int xpos)
{
	if (0 < xpos || xpos < 100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool point::SetY(int ypos)
{
	if (0 < ypos || ypos < 100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	y = ypos;
	return true;
}