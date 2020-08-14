#include <iostream>
using namespace std;

class Sosimple
{
private:
	int num1;
	int num2;
public:
	//생성자, 멤버이니셜라이징예시
	Sosimple(int n1, int n2) :num1(n1)
	{
		num2 = n2; //생성자 몸체 초기화
	}
	void Initss(void)
	{
		cout << num1 << " " << num2 << endl;
	}
};

int main(void)
{
	Sosimple ss(5, 3);
	ss.Initss();
	return 0;
}

/*
객체 멤버변수를 이니셜라이저로 초기화 하는 예시
Rectangle::Rectangle(int x1, int y1, int x2, int y2)
	:upLeft(x1, y1), lowRight(x2, y2)
//객체생성중 upLeft, lowRight가 각각 x1,y1 x2,y2를 인자로 전달받는 생성자를 호출하라.


이니셜라이저의 장점
	초기화의 대상을 명확히 인식할 수 있다.
	성능에 약간의 이점이 있다.
		이니셜라이저는 다음과 같이 비유할 수 있다.
			이니셜라이저: int num1=n1;
			생성자몸체초기화: int num1;, num1=n1;
		즉 선언과 동시에 초기화 하는셈이다.
		따라서 const 멤버변수도 초기화가 가능하다.
*/