#include <iostream>
#define SQUARE(x) ((x)*(x))
inline int SQUARE2(int x) {
	return x * x;
}
int main(void) {
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE2(5) << std::endl;

	std::cout << SQUARE(3.15) << std::endl;
	std::cout << SQUARE2(3.15) << std::endl;
	return 0;
}

/*
inline �Լ��� �Լ��� �����ϴµ� �ʿ��� �۾����� ���̴µ��� ���ǰ��ִ�.
inline �Լ��� �ڵ带 �ڵ��ġ�� ���� �����Ѵ�.
�� ����� ��ũ�ο� ������ ��ó���Ⱑ �ƴ� �����Ϸ����� ó���ȴ�.

������ �Լ��� �����ѹ������ �����ϱ����� ���̱⿡
�����Ϸ����� ������ �Լ���� �ǴܵǸ� �ζ����Լ��� �����ʴ´�.


�߰������� ��ũ���Լ����� �������� �� �ִµ�

��ũ��
MACRO(a,b) a*b
�ζ��� �Լ�
inline Inline(int a, int b){
return a*b;
}

���� (10+20,30+40)�� ���� �Է��� ���
��ũ��: 10+20*30+40
�ζ���: (10+20)*(30+40)
���� ó���ȴ�.
*/