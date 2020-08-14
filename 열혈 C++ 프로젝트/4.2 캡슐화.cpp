#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
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
	void InitCircle(int x, int y, int r)
	{
		center.Init(x, y);
		rad = r;
	}
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
	void Init(int x1, int y1, int rad1, int x2, int y2, int rad2)
	{
		inner.InitCircle(x1, y1, rad1);
		outer.InitCircle(x2, y2, rad2);
	}
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
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}

/*
ĸ��ȭ�� �ϳ��� �����Ͽ� ���� ����� ���ÿ� �۵��Ҷ� ���ȴ�.

ĸ��ȭ�� ���Ͽ� ���⵵�� ���߰� ���������� �Ѵ�.

ĸ��ȭ�� ���α׷��� ��ü�� ������ ������ ���� ĸ��ȭ ������ �޶�����.
*/