#include <iostream>
using namespace std;

class  SimpleClass {
private:
	int num1;
	int num2;
public:
	//3개의 오버로딩되있는 생성자
	SimpleClass()
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}
	/* 디폴트값 설정한 버전
	SimpleClass(int n1=0, int n2=0)
	{
		num1 = n1;
		num2 = n2;
	}
	*/
	void ShowData()
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass LocFunc(); //지역적으로 함수를 선언
	SimpleClass sc1; //객체 생성
	sc1.ShowData();
	SimpleClass sc2(3);
	sc2.ShowData();
	SimpleClass sc3=LocFunc();
	sc3.ShowData();

	return 0;
}

SimpleClass LocFunc() //함수 정의
{
	SimpleClass sc(20, 30);
	return sc;
}

/*
생성자는 클래스와 이름이 동일하며 반환형이 선언되어 있지 않다.

생성자는 객체생성시 단 한번 호출된다.

생성자는 오버로딩 된다.

생성자는 디폴트값 설정이 된다.


SimpleClass() 생성자를 SimpleClass sc1; 으로 선언해야 하는이유
SimpleClass sc1(); 으로 선언시 SimpleClass(int n1=0, int n2=0) 처럼
디폴트값이 설정된 생성자와 구분할 수 없다.

지역함수선언: 함수내에 지역적으로 함수를 선언할 수 있다.

액세스함수: 사용하지 않지만 필요할 수 있다고 판단되어 제작한 함수
*/