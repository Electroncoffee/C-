#include <iostream>
using namespace std;

class AAA
{
private:
	int num = 30;
public:
	AAA() {}	//����Ʈ ������
	int Getnum(void) { return num; }
};

class BBB
{
private:
	int num = 40;
public:
	BBB(int n) : num(n)
	{}
};

int main(void)
{
	AAA ref;
	AAA *ptr = new AAA;
	cout << ref.Getnum() << endl;
	BBB ref2(30);
	BBB *ptr2 = new BBB(40);
	/*������ ���� ������ �Ұ����ϴ�.
	BBB ref2;
	BBB *ptr2 = new BBB;
	*/

	return 0;
}

/*
��ü�� �Ǳ� ���ؼ��� �ݵ�� �ϳ��� �����ڰ� ȣ��Ǿ�� �Ѵ�.
���� �����ڸ� �������� �ʴ� ��� �ڵ����� ����Ʈ �����ڰ� ���Եȴ�.

����Ʈ�����ڴ� ���ڸ� ���� ������, ���������� �ƹ��ϵ� ���� �ʴ´�.
*/