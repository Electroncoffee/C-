#include <iostream>
using namespace std;

int main(void) {
	//new�� �̿��� ������ �޸� �Ҵ�
	int *ptr1 = new int;
	double *ptr2 = new double;
	int *arr1 = new int[3];
	double *arr2 = new double[7];

	//�����ڸ� �̿��� �����͸� ������� �ʰ� �����ϴ� ���
	int *ptr3 = new int;
	int &ref = *ptr3;
	ref = 20;
	cout << *ptr3 << endl;
	cout << ref << endl;

	//delete�� �̿��� ������ �޸� �Ҹ�
	delete ptr1;
	delete ptr2;
	delete[]arr1;
	delete[]arr2;

	return 0;
}

/*
	new�� �̿��� ������ �޸� �Ҵ�

	����ü���� �տ� �����Ͱ� ������� ȭ��ǥó���Ѵ�.
	Point *result = new Point;
	result->xpos;

	cǥ�� ��������� .h���ƴ� �տ� c�� ���̸� �ȴ�.
	stdio.h  ->  cstdio
*/