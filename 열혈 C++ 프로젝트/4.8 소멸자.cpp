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
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	~Person() //소멸자
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
	소멸자는 객체를 소멸시킬때 쓴다.

	생성자와 같이 소멸자도 정의하지 않으면 디폴트 소멸자가 생성된다.
	또한 소멸자는 객체소멸 과정에서 자동으로 호출이 된다.

	소멸자는 반환형이 없으며, 실제로 반환하지 않는다.
	매개변수는 void형으로 선언되며 오버로딩도, 디폴트 값 설정도 불가능하다.
*/