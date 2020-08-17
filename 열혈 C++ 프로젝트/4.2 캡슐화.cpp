#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x, int y) : xpos(x), ypos(y) {}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
private:
	Point center;
	int rad;
public:
	Circle(int x, int y, int r) : center(x, y), rad(r) {}
	void ShowCircleinfo() const
	{
		cout << "radious: " << rad << endl;
		center.ShowPointInfo();
	}
};

class Ring
{
private:

	Circle inner;
	Circle outer;
public:
	Ring(int x1, int y1, int rad1, int x2, int y2, int rad2)
		: inner(x1, y1, rad1), outer(x2, y2, rad2) {}
	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		inner.ShowCircleinfo();
		cout << "outer Circle Info..." << endl;
		outer.ShowCircleinfo();
	}
};

int main(void)
{
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}

/*
ĸ��ȭ�� �ϳ��� �����Ͽ� ���� ����� ���ÿ� �۵��Ҷ� ���ȴ�.

ĸ��ȭ�� ���Ͽ� ���⵵�� ���߰� ���������� �Ѵ�.

ĸ��ȭ�� ���α׷��� ��ü�� ������ ������ ���� ĸ��ȭ ������ �޶�����.
*/

/*
	ver1.0 �Ϸ�
	ver2.0 ������ ���� �Ϸ�
*/