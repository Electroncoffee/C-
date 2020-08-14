#include <iostream>
using namespace std;

int main(void) {
	int num = 20;
	int &num2 = num; //������ ����

	cout << num << endl;
	cout << num2 << endl << endl;

	//������ �����ڴ� �޸� �ּҰ��� �ٸ��� ����
	cout << &num << endl;
	cout << &num2 << endl << endl;

	//�������� ������ ������ ����
	int inum = 30;
	int &inum2 = inum; int &inum3 = inum; int &inum4 = inum;
	cout << inum << endl << inum2 << endl << inum3 << endl << inum4 << endl << endl;

	//�����ڸ� ������� ������ ���� ����
	int ynum = 40;
	int &ynum2 = ynum; int &ynum3 = ynum2; int &ynum4 = ynum3;
	cout << ynum << endl << ynum2 << endl << ynum3 << endl << ynum4 << endl << endl;

	//�����ڴ� �迭���� ���� ����(�迭��Ҵ� ������ ����)
	int arr[3] = { 1,3,5 };
	int &cnum1 = arr[0]; int &cnum2 = arr[1]; int &cnum3 = arr[2];
	cout << cnum1 << endl << cnum2 << endl << cnum3 << endl << endl;

	//�����ڴ� ������ �������� ���� ����
	int pnum = 12;
	int *ptr = &pnum;
	int **dptr = &ptr;
	int *(&pref) = ptr;
	int **(&dpref) = dptr;
	cout << *pref << endl << **dpref << endl << endl;



	return 0;
}

/*
�����ڴ� ������ �Ҵ�� �޸𸮿� ��Ī(�̸�)�� �ϳ� �ٿ��ִ� ��

�����ڴ� �������� ���𰡴��ϴ�.
�����ڴ� ����� ���ÿ� �������� �����ؾ��Ѵ�.
�����ڴ� ������ ����� ������ �� ����.
�����ڸ� �����ϸ� NULL�� �ʱ�ȭ�ϴ� �͵� �Ұ����ϴ�.
*/