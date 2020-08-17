#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char * name;
	int age;
public:
	Person(const char * myname, int myage)
	{
		size_t len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}

	~Person() //�Ҹ���
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}

/*
	�Ҹ��ڴ� ��ü�� �Ҹ��ų�� ����.

	�����ڿ� ���� �Ҹ��ڵ� �������� ������ ����Ʈ �Ҹ��ڰ� �����ȴ�.
	���� �Ҹ��ڴ� ��ü�Ҹ� �������� �ڵ����� ȣ���� �ȴ�.

	�Ҹ��ڴ� ��ȯ���� ������, ������ ��ȯ���� �ʴ´�.
	�Ű������� void������ ����Ǹ� �����ε���, ����Ʈ �� ������ �Ұ����ϴ�.
*/