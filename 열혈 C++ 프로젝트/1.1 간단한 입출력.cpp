#include <iostream>

int main(void) {
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << num << std::endl;

	std::cout << "�Է�: ";
	std::cin >> num;
	std::cout << "�Է¹�����: " << num << std::endl;

	char str[100];
	std::cout << "���ڿ� �Է�: ";
	std::cin >> str;
	std::cout << str << std::endl;
	std::cout << str[2] << std::endl;
	return 0;
}


/*

#include <iostream>
//ǥ�� ��������� .h Ȯ���ڸ� �����Ѵ�.

//��� ����
std::cout << "Hello World!" << std::endl;
//�Է� ����
std::cin >> val1;

//����¿��� ���ٸ� ����� ������ �������� �ʾƵ� �˾Ƽ� �����ش�.

std::cout //��� ��ɾ�
std::cin  //�Է� ��ɾ�
std::endl //����
*/