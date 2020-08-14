#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);			//메뉴출력
void MakeAccount(void);			//계좌개설을 위한 함수
void DepositMoney(void);		//입금
void WithDrawMoney(void);		//출금
void ShowAllAccInfo(void);		//잔액조회

typedef struct {
	int accID;					//계좌번호
	int balance;				//잔액
	char cusName[NAME_LEN];		//고객이름
} Account;

Account accArr[100];			//고객저장을 위한 구조체 배열
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
	cout << endl << endl << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> accArr[accNum].accID;
	cout << "이름: ";
	cin >> accArr[accNum].cusName;
	cout << "입금액: ";
	cin >> accArr[accNum].balance;
	accNum++;
}

void DepositMoney(void) {
	int Money, ID;
	cout << endl << endl << "[입금]" << endl;
	cout << "계좌ID: "; cin >> ID;
	cout << "입금액: "; cin >> Money;
	for (int i = 0; i <= accNum; i++) {
		if (accArr[i].accID == ID) {
			accArr[i].balance += Money;
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
		if (accArr[i].accID == ID) {
			if (accArr[i].balance < Money) {
				cout << "잔액부족 출금을 할 수 없습니다." << endl;
				return;
			}
			accArr[i].balance -= Money;
			cout << "출금완료" << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID입니다." << endl;
}

void ShowAllAccInfo(void) {
	cout << endl;
	for (int i = 0; i < accNum; i++) {
		cout << endl << "계좌ID: " << accArr[i].accID << endl;
		cout << "이름: " << accArr[i].cusName << endl;
		cout << "잔액: " << accArr[i].balance << endl << endl;
	}
}
