#include <iostream>
using namespace std;

class Sosimple
{
private:
	int num;
public:
	void Setnum(int n)
	{
		num = n;
	}
	void Initnum(void)
	{
		cout << num << endl;
	}
};

int main(void)
{
	int i;

	Sosimple ss[2];
	cin >> i;
	ss[0].Setnum(i);
	cin >> i;
	ss[1].Setnum(i);

	ss[0].Initnum();
	ss[1].Initnum();
	return 0;
}

/*
	객체또한 구조체배열, 구조체포인터배열처럼 선언 가능하다.

	Sosimple ss[2];
	Sosimple * pss[2];
*/