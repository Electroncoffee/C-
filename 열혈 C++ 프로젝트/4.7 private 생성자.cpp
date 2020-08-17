#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA() : num(0) {} //�ܺο��� ��ü�� �θ������� ������
	AAA& CreateImitObj(int n) const //��ȯ���� �������� �Լ�
	{
		AAA * ptr = new AAA(n);//private�����ڷ� ��ü ����, �����ÿ��� ��ü�� ����
		return *ptr;//������ ��ü�� ��ȯ
	}
	void ShowNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) {} //private������
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA &obj1 = base.CreateImitObj(3);
	obj1.ShowNum();

	AAA &obj2 = base.CreateImitObj(12);
	obj2.ShowNum();

	//�����ÿ��� ������ ��ü�� �Ҹ�
	delete &obj1;
	delete &obj2;

	return 0;
}

/*
��ü�� ������ Ŭ������ �ܺο��� ����Ǳ� ������ �����ڴ� public���� ����Ǿ���.
������ Ŭ���� ���ο��� ��ü�� �����Ѵٸ�, �����ڰ� private���� ����Ǿ �ȴ�.

���� �Ҵ�� �޸� ������ ������ �����Ͽ�, �����ڸ� ���� ������ �����ϴ�.
*/