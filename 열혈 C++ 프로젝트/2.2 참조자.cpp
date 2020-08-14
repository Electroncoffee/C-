#include <iostream>
using namespace std;

int main(void) {
	int num = 20;
	int &num2 = num; //참조자 선언

	cout << num << endl;
	cout << num2 << endl << endl;

	//변수와 참조자는 메모리 주소값이 다르지 않음
	cout << &num << endl;
	cout << &num2 << endl << endl;

	//참조자의 수에는 제한이 없음
	int inum = 30;
	int &inum2 = inum; int &inum3 = inum; int &inum4 = inum;
	cout << inum << endl << inum2 << endl << inum3 << endl << inum4 << endl << endl;

	//참조자를 대상으로 참조자 선언 가능
	int ynum = 40;
	int &ynum2 = ynum; int &ynum3 = ynum2; int &ynum4 = ynum3;
	cout << ynum << endl << ynum2 << endl << ynum3 << endl << ynum4 << endl << endl;

	//참조자는 배열에도 선언 가능(배열요소는 변수로 간주)
	int arr[3] = { 1,3,5 };
	int &cnum1 = arr[0]; int &cnum2 = arr[1]; int &cnum3 = arr[2];
	cout << cnum1 << endl << cnum2 << endl << cnum3 << endl << endl;

	//참조자는 포인터 변수에도 선언 가능
	int pnum = 12;
	int *ptr = &pnum;
	int **dptr = &ptr;
	int *(&pref) = ptr;
	int **(&dpref) = dptr;
	cout << *pref << endl << **dpref << endl << endl;



	return 0;
}

/*
참조자는 변수가 할당된 메모리에 별칭(이름)을 하나 붙여주는 것

참조자는 변수에만 선언가능하다.
참조자는 선언과 동시에 누군가를 참조해야한다.
참조자는 참조의 대상을 변경할 수 없다.
참조자를 선언하며 NULL로 초기화하는 것도 불가능하다.
*/