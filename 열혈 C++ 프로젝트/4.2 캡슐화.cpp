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
캡슐화는 하나의 목적하에 여러 기능이 동시에 작동할때 사용된다.

캡슐화를 통하여 복잡도를 낮추고 정보은닉을 한다.

캡슐화는 프로그램의 구체적 정보와 가정에 따라 캡슐화 범위가 달라진다.
*/