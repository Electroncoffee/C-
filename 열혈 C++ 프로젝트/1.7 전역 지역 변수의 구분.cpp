#include <iostream>

int val = 0;

int main(void) {
	int val = 3;
	val += 3;
	::val += 3;
	std::cout << val << std::endl << ::val << std::endl;
	return 0;
}

/*
전역변수를 지역변수와 구분하기위해 범위지정연산자(::)를 사용할 수 있다.

*/