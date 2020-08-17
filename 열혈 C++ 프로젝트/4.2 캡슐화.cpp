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
캡슐화는 하나의 목적하에 여러 기능이 동시에 작동할때 사용된다.

캡슐화를 통하여 복잡도를 낮추고 정보은닉을 한다.

캡슐화는 프로그램의 구체적 정보와 가정에 따라 캡슐화 범위가 달라진다.
*/

/*
	ver1.0 완료
	ver2.0 생성자 적용 완료
*/