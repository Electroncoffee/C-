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
	��ü���� ����ü�迭, ����ü�����͹迭ó�� ���� �����ϴ�.

	Sosimple ss[2];
	Sosimple * pss[2];
*/