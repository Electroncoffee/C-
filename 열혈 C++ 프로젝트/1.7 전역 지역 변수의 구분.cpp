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
���������� ���������� �����ϱ����� ��������������(::)�� ����� �� �ִ�.

*/