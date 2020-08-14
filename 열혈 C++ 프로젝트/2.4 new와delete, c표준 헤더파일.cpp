#include <iostream>
using namespace std;

int main(void) {
	//new를 이용한 힙영역 메모리 할당
	int *ptr1 = new int;
	double *ptr2 = new double;
	int *arr1 = new int[3];
	double *arr2 = new double[7];

	//참조자를 이용한 포인터를 사용하지 않고 접근하는 방법
	int *ptr3 = new int;
	int &ref = *ptr3;
	ref = 20;
	cout << *ptr3 << endl;
	cout << ref << endl;

	//delete를 이용한 힙영역 메모리 소멸
	delete ptr1;
	delete ptr2;
	delete[]arr1;
	delete[]arr2;

	return 0;
}

/*
	new를 이용한 힙영역 메모리 할당

	구조체에서 앞에 포인터가 있을경우 화살표처리한다.
	Point *result = new Point;
	result->xpos;

	c표준 헤더파일은 .h가아닌 앞에 c를 붙이면 된다.
	stdio.h  ->  cstdio
*/