#include <iostream>
using namespace std;

class AAA
{
private:
	int num = 30;
public:
	AAA() {}	//디폴트 생성자
	int Getnum(void) { return num; }
};

class BBB
{
private:
	int num = 40;
public:
	BBB(int n) : num(n)
	{}
};

int main(void)
{
	AAA ref;
	AAA *ptr = new AAA;
	cout << ref.Getnum() << endl;
	BBB ref2(30);
	BBB *ptr2 = new BBB(40);
	/*다음과 같은 선언은 불가능하다.
	BBB ref2;
	BBB *ptr2 = new BBB;
	*/

	return 0;
}

/*
객체가 되기 위해서는 반드시 하나의 생성자가 호출되어야 한다.
따라서 생성자를 정의하지 않는 경우 자동으로 디폴트 생성자가 삽입된다.

디폴트생성자는 인자를 받지 않으며, 내부적으로 아무일도 하지 않는다.
*/