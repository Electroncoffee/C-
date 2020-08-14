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

	//반환형이 참조형인 경우
	int num = 1;
	int num2 = FuncOne(num);
	int &Rnum2 = FuncOne(num);
	num += 1;
	num2 += 5;
	Rnum2 += 7;
	cout << num << endl << num2 << endl << Rnum2 << endl << endl;

	//상수를 참조하는 참조자
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

// 반환형이 참조형인 경우
int& FuncOne(int &ref) {
	ref++;
	return ref;
}

/*
	참조자의 능력은 함수에서 발휘된다.
	선언과 동시에 참조, 참조의 대상 변경이 불가능한 점을 빼면
	포인터에 비해 너무 편하다.

	그러나 코드분석과정에서 참조자는 함수의 특성을 이해할 수 없게 한다.
	따라서 몇가지 원칙을 정하여 코드분석을 수월하게 해주어야 한다.
		1. 함수 내에서, 참조자를 통한 값을 변경하지 않는경우
		   const선언으로 값의 변경이 이뤄지지 않음을 알게 해야한다.

	반환형이 참조형인 함수
		반환형: 참조형, 반환: 참조자
		int& num2=Func(num1)
			num2는 반환된 참조자와 같은 변수를 참조한다.

		int num2=Func(num1)
			num2는 반환된 참조자와 같은 값만 가진다.

		반환형: 기본자료형, 반환: 참조자
		int num2=Func(num1)
			num2는 반환된 참조자와 같은 값만 가진다.


	상수화된 변수를 참조자가 참조하면 에러난다.
	참조자또한 상수화해서 변수의 값을 바꾸지 못한다는것을 명시해야 한다.
*/