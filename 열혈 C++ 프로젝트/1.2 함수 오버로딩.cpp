#include<iostream>
// 같은 이름의 3개의 함수를 설정
void swap(int *num1, int *num2) {
	int i = *num1;
	*num1 = *num2;
	*num2 = i;
	return;
}

void swap(char *num1, char *num2) {
	char i = *num1;
	*num1 = *num2;
	*num2 = i;
	return;
}

void swap(double *num1, double *num2) {
	double i = *num1;
	*num1 = *num2;
	*num2 = i;
	return;
}

int main(void) {
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;

	return 0;
}

/*
함수들의 인자가 서로 다르다면 c++은 구분해낸다.
따라서 함수의 이름이 같아도 인자가 다르다면 생성이 되며 에러또한 나지 않는다.

//짧은 예시
int num1 = 20, num2 = 30;
char ch1 = 'A', ch2 = 'Z';
swap(&num1, &num2);
swap(&ch1, &ch2);
*/