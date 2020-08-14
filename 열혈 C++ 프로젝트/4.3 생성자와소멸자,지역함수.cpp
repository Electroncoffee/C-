#include <iostream>
using namespace std;

class  SimpleClass {
private:
	int num1;
	int num2;
public:
	//3���� �����ε����ִ� ������
	SimpleClass()
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}
	/* ����Ʈ�� ������ ����
	SimpleClass(int n1=0, int n2=0)
	{
		num1 = n1;
		num2 = n2;
	}
	*/
	void ShowData()
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass LocFunc(); //���������� �Լ��� ����
	SimpleClass sc1; //��ü ����
	sc1.ShowData();
	SimpleClass sc2(3);
	sc2.ShowData();
	SimpleClass sc3=LocFunc();
	sc3.ShowData();

	return 0;
}

SimpleClass LocFunc() //�Լ� ����
{
	SimpleClass sc(20, 30);
	return sc;
}

/*
�����ڴ� Ŭ������ �̸��� �����ϸ� ��ȯ���� ����Ǿ� ���� �ʴ�.

�����ڴ� ��ü������ �� �ѹ� ȣ��ȴ�.

�����ڴ� �����ε� �ȴ�.

�����ڴ� ����Ʈ�� ������ �ȴ�.


SimpleClass() �����ڸ� SimpleClass sc1; ���� �����ؾ� �ϴ�����
SimpleClass sc1(); ���� ����� SimpleClass(int n1=0, int n2=0) ó��
����Ʈ���� ������ �����ڿ� ������ �� ����.

�����Լ�����: �Լ����� ���������� �Լ��� ������ �� �ִ�.

�׼����Լ�: ������� ������ �ʿ��� �� �ִٰ� �ǴܵǾ� ������ �Լ�
*/