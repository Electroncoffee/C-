#include <iostream>

//using��ɾ �̿��� �̸������� ���(���α׷��� ��ġ�� ������ �ּ�ó��)
//using std::cin;
//using std::cout;
//using std::endl;
//using namespace std;

namespace Nspace {
	int i = 20;
	void print(void) {
		std::cout << "�̰��� �̸������� ����� �Լ��̴�." << std::endl;
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
	std::cout << "�̰��� �̸������� �Լ��� ���� �ٱ��� �Լ��� �����Ͽ���." << std::endl;
}

/*
	namespace�� ���α׷����� ���Ǵ� �ĺ��ڸ�
	���������� ������ �� �ִ� ����� �����Ѵ�.

	���� namespace�� ���ǵ� �Լ� �� ������ ���ÿ��� namespace�� ����� �ʿ䰡 ����.
	8���� ��ɾ �� �����̴�.

	namespace�� �� �̻��� ������ ����� ������ ���� �ִ�.
	12���� ��ɾ �� �����̴�.

	namespace�ȿ� namespace�� ��ø���� ������ �� �ִ�.
	14���� ��ɾ �� �����̴�.

	// std::cin�� cin���� ����
	using std::cin;
	// namespace std�� ��� ���� ����
	using namespace std;

	��Ī���� ��ɾ�
	namespace ABC = AAA::BBB::CCC;
*/