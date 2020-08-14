#include <iostream>
using namespace std;

bool IsPositive(int num) {
	if (num <= 0) {
		return false;
	}
	else
		return true;
}

int main(void) {
	bool isPos;
	int num;
	cout << "Input number: ";
	cin >> num;
	
	isPos = IsPositive(num);
	if (isPos) {
		cout << "Positive number" << endl;
	}
	else
		cout << "Negative number" << endl;
	return 0;
}

/*
bool 자료형은 true와 false를위해 별도로 정의된 자료형이다.
기본자료형의 하나이니 다른 자료형과 동일하게 사용가능하다.
*/