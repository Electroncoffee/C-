#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA() : num(0) {}
	AAA& CreateImitObj(int n) const
	{
		AAA * ptr = new AAA(n);
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) {}
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA &obj1 = base.CreateImitObj(3);
	obj1.ShowNum();

	AAA &obj2 = base.CreateImitObj(12);
	obj2.ShowNum();

	delete &obj1;
	delete &obj2;

	return 0;
}

/*
객체의 생성이 클래스의 외부에서 진행되기 때문에 생성자는 public에서 선언되었다.
하지만 클래스 내부에서 객체를 생성한다면, 생성자가 private으로 선언되어도 된다.

힙에 할당된 메모리 공간은 변수로 간주하여, 참조자를 통한 참조가 가능하다.
*/