#include <iostream>

//using명령어를 이용한 이름공간의 명시(프로그램을 고치기 귀찮아 주석처리)
//using std::cin;
//using std::cout;
//using std::endl;
//using namespace std;

namespace Nspace {
	int i = 20;
	void print(void) {
		std::cout << "이것은 이름공간에 선언된 함수이다." << std::endl;
	}
	void print2(void) {
		std::cout << i << std::endl;
	}
}

namespace Nspace {
	void print3(void);
	namespace Nspace2 {
		int i = 30;
	}
}

namespace AAA {
	namespace BBB {
		namespace CCC {
			int num1=30;
		}
	}
}

int main(void) {
	std::cout << AAA::BBB::CCC::num1 << std::endl;
	namespace ABC = AAA::BBB::CCC;
	std::cout << ABC::num1 << std::endl;
	std::cout << Nspace::i << std::endl;
	Nspace::print();
	Nspace::print2();
	Nspace::print3();
	std::cout << Nspace::Nspace2::i << std::endl;
	return 0;
}

void Nspace::print3(void) {
	std::cout << "이것은 이름공간에 함수를 선언 바깥에 함수를 정의하였다." << std::endl;
}

/*
	namespace는 프로그램에서 사용되는 식별자를
	구조적으로 관리할 수 있는 방법을 제공한다.

	같은 namespace에 정의된 함수 및 변수를 사용시에는 namespace를 명시할 필요가 없다.
	8행의 명령어가 그 예시이다.

	namespace를 둘 이상의 영역에 나뉘어서 선언할 수도 있다.
	12행의 명령어가 그 예시이다.

	namespace안에 namespace를 중첩으로 삽입할 수 있다.
	14행의 명령어가 그 예시이다.

	// std::cin을 cin으로 생략
	using std::cin;
	// namespace std의 모든 것을 생략
	using namespace std;

	별칭지정 명령어
	namespace ABC = AAA::BBB::CCC;
*/