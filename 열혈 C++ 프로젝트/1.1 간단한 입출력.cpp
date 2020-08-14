#include <iostream>

int main(void) {
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << num << std::endl;

	std::cout << "입력: ";
	std::cin >> num;
	std::cout << "입력받은값: " << num << std::endl;

	char str[100];
	std::cout << "문자열 입력: ";
	std::cin >> str;
	std::cout << str << std::endl;
	std::cout << str[2] << std::endl;
	return 0;
}


/*

#include <iostream>
//표준 헤더파일은 .h 확장자를 생략한다.

//출력 예시
std::cout << "Hello World!" << std::endl;
//입력 예시
std::cin >> val1;

//입출력에서 별다른 입출력 포맷을 지정하지 않아도 알아서 맞춰준다.

std::cout //출력 명령어
std::cin  //입력 명령어
std::endl //개행
*/