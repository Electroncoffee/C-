#include <iostream>
using namespace std;

class Sosimple
{
private:
	int num1;
	int num2;
public:
	//������, ����̴ϼȶ���¡����
	Sosimple(int n1, int n2) :num1(n1)
	{
		num2 = n2; //������ ��ü �ʱ�ȭ
	}
	void Initss(void)
	{
		cout << num1 << " " << num2 << endl;
	}
};

int main(void)
{
	Sosimple ss(5, 3);
	ss.Initss();
	return 0;
}

/*
��ü ��������� �̴ϼȶ������� �ʱ�ȭ �ϴ� ����
Rectangle::Rectangle(int x1, int y1, int x2, int y2)
	:upLeft(x1, y1), lowRight(x2, y2)
//��ü������ upLeft, lowRight�� ���� x1,y1 x2,y2�� ���ڷ� ���޹޴� �����ڸ� ȣ���϶�.


�̴ϼȶ������� ����
	�ʱ�ȭ�� ����� ��Ȯ�� �ν��� �� �ִ�.
	���ɿ� �ణ�� ������ �ִ�.
		�̴ϼȶ������� ������ ���� ������ �� �ִ�.
			�̴ϼȶ�����: int num1=n1;
			�����ڸ�ü�ʱ�ȭ: int num1;, num1=n1;
		�� ����� ���ÿ� �ʱ�ȭ �ϴ¼��̴�.
		���� const ��������� �ʱ�ȭ�� �����ϴ�.
*/