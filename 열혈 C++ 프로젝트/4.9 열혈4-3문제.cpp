#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS {
	enum { CLERK, SENIOR, ASSIST, MANAGER };
	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "���" << endl << endl;
			break;
		case SENIOR:
			cout << "����" << endl << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl << endl;
			break;
		case MANAGER:
			cout << "����" << endl << endl;
			break;
		}
	}
}

class NameCard
{
private:
	char * name;
	char * company;
	char * phone;
	int rank;
public:
	NameCard(const char * myname, const char * mycomp, const char * myphone, int myrank)
		: rank(myrank)
	{
		size_t len1 = strlen(myname) + 1;
		name = new char[len1];
		strcpy(name, myname);

		size_t len2 = strlen(mycomp) + 1;
		company = new char[len2];
		strcpy(company, mycomp);

		size_t len3 = strlen(myphone) + 1;
		phone = new char[len3];
		strcpy(phone, myphone);
	}
	void ShowNameCardInfo(void)
	{
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << phone << endl;
		cout << "����: ";
		COMP_POS::ShowPositionInfo(rank);
	}
	~NameCard()
	{
		delete[]name;
		delete[]company;
		delete[]phone;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}