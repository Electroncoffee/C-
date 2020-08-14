#include <iostream>
using namespace std;

void swap(int &num1, int &num2);

int& FuncOne(int &num);

int main(void) {
	int val1 = 10;
	int val2 = 20;
	cout << val1 << endl << val2 << endl;
	swap(val1, val2);
	cout << val1 << endl << val2 << endl << endl;

	//��ȯ���� �������� ���
	int num = 1;
	int num2 = FuncOne(num);
	int &Rnum2 = FuncOne(num);
	num += 1;
	num2 += 5;
	Rnum2 += 7;
	cout << num << endl << num2 << endl << Rnum2 << endl << endl;

	//����� �����ϴ� ������
	const int num3 = 20;
	//int& ref=num;
	const int &ref = num3;
	cout << ref << endl << endl;


	return 0;
}

void swap(int &num1, int &num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

// ��ȯ���� �������� ���
int& FuncOne(int &ref) {
	ref++;
	return ref;
}

/*
	�������� �ɷ��� �Լ����� ���ֵȴ�.
	����� ���ÿ� ����, ������ ��� ������ �Ұ����� ���� ����
	�����Ϳ� ���� �ʹ� ���ϴ�.

	�׷��� �ڵ�м��������� �����ڴ� �Լ��� Ư���� ������ �� ���� �Ѵ�.
	���� ��� ��Ģ�� ���Ͽ� �ڵ�м��� �����ϰ� ���־�� �Ѵ�.
		1. �Լ� ������, �����ڸ� ���� ���� �������� �ʴ°��
		   const�������� ���� ������ �̷����� ������ �˰� �ؾ��Ѵ�.

	��ȯ���� �������� �Լ�
		��ȯ��: ������, ��ȯ: ������
		int& num2=Func(num1)
			num2�� ��ȯ�� �����ڿ� ���� ������ �����Ѵ�.

		int num2=Func(num1)
			num2�� ��ȯ�� �����ڿ� ���� ���� ������.

		��ȯ��: �⺻�ڷ���, ��ȯ: ������
		int num2=Func(num1)
			num2�� ��ȯ�� �����ڿ� ���� ���� ������.


	���ȭ�� ������ �����ڰ� �����ϸ� ��������.
	�����ڶ��� ���ȭ�ؼ� ������ ���� �ٲ��� ���Ѵٴ°��� ����ؾ� �Ѵ�.
*/