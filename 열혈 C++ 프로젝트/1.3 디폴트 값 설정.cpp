#include <iostream>

int BoxVolume(int length, int width = 1, int height = 1);
int main(void) {
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	//std::cout << "[D, D, D] : " << BoxVolume() << std::endl;
	return 0;
}
int BoxVolume(int length, int width, int height) {
	return length * width * height;
}

/*
�Լ��� ����Ʈ ���� ���������ν� ���� �Է¹��� �ʾ�����
������ ������ ������ �Ѵ�.

Add(int num1=10, int num2=20) //�Է¹��� ���ϸ� ���� 10, 20���� �����ȴ�.
Add(int num1, int num2=20) //�Ϻκи� ���������ϴ� �׷���...
Add(int num1=10, int num2) //������ ���� ���ʺ��� �����ϸ� ��������.
// ����Ʈ ���� �ݵ�� �����ʺ��� ���� ä�������� �Ѵ�.
*/