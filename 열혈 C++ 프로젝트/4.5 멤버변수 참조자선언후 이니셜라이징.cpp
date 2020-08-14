#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;
	}
	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA &ref;
	const int &num;

public:
	BBB(AAA &r, const int &n) :ref(r), num(n)
	{//empty
	}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num " << num << endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
	return 0;
}

/*
이니셜라이저의 "멤버변수를 선언과 동시에 초기화"라는 특징 때문에

선언과 동시에 초기화가 되야하는 참조자를 멤버변수로 선언가능하게 해준다.
*/