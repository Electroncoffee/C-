//목표: 기존 1step의 Account 클래스 정의, 객체 포인터 배열 적용
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;		//이름 최대 글자수 제한

void ShowMenu(void);			//메뉴출력
void MakeAccount(void);			//계좌개설을 위한 함수
void DepositMoney(void);		//입금
void WithDrawMoney(void);		//출금
void ShowAllAccInfo(void);		//잔액조회

class Account {
private:
	int accID;					//계좌번호
	int balance;				//잔액
	char * cusName;		//고객이름
public:
	Account(int id, int money, char * name) : accID(id), balance(money)
	{
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);

	}

	int ID(void) { return accID; }

	void Deposit(int money) { balance += money; }
	int WithDraw(int money)
	{ 
		if (balance < money)
		{
			return 0;
		}
		balance -= money;
		return money;
	}
	void AccInfo(void)
	{
		cout << endl << "계좌ID: " << accID << endl;
		cout << "이름: " << cusName << endl;
		cout << "잔액: " << balance << endl << endl;
	}
};

Account * accArr[100];
int accNum = 0;					//현재 저장된 Account수


int main(void) {
	int choice;
	while (1) {
		choice = 0;
		ShowMenu();
		cout << "선택: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			MakeAccount();
			break;
		case 2:
			DepositMoney();
			break;
		case 3:
			WithDrawMoney();
			break;
		case 4:
			ShowAllAccInfo();
			break;
		case 5:
			cout << "프로그램 종료" << endl;
			return 0;
		default:
			cout << "Wrong Entrance" << endl;
		}
	}
}

void ShowMenu(void) {
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입    금" << endl;
	cout << "3. 출    금" << endl;
	cout << "4. 전체고객 잔액조회" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount(void) {
	int id;
	char name[NAME_LEN];
	int money;
	cout << endl << endl << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "이름: ";
	cin >> name;
	cout << "입금액: ";
	cin >> money;
	accArr[accNum++] = new Account(id, money, name);
}

void DepositMoney(void) {
	int Money, ID;
	cout << endl << endl << "[입금]" << endl;
	cout << "계좌ID: "; cin >> ID;
	cout << "입금액: "; cin >> Money;
	for (int i = 0; i <= accNum; i++) {
		if (accArr[i]->ID() == ID) {
			accArr[i]->Deposit(Money);
			cout << "입금완료" << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID입니다." << endl;
}

void WithDrawMoney(void) {
	int Money, ID;
	cout << endl << endl << "[출금]" << endl;
	cout << "계좌ID: "; cin >> ID;
	cout << "출금액: "; cin >> Money;
	for (int i = 0; i <= accNum; i++) {
		if (accArr[i]->ID() == ID) {
			if (accArr[i]->WithDraw(Money)==0) {
				cout << "잔액부족 출금을 할 수 없습니다." << endl;
				return;
			}
			cout << "출금완료" << endl;
		}
	}
	cout << "유효하지 않은 ID입니다." << endl;
}

void ShowAllAccInfo(void) {
	cout << endl;
	for (int i = 0; i < accNum; i++) {
		accArr[i]->AccInfo();
	}
}
