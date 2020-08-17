//��ǥ: ���� 1step�� Account Ŭ���� ����, ��ü ������ �迭 ����
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;		//�̸� �ִ� ���ڼ� ����

void ShowMenu(void);			//�޴����
void MakeAccount(void);			//���°����� ���� �Լ�
void DepositMoney(void);		//�Ա�
void WithDrawMoney(void);		//���
void ShowAllAccInfo(void);		//�ܾ���ȸ

class Account {
private:
	int accID;					//���¹�ȣ
	int balance;				//�ܾ�
	char * cusName;		//���̸�
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
		cout << endl << "����ID: " << accID << endl;
		cout << "�̸�: " << cusName << endl;
		cout << "�ܾ�: " << balance << endl << endl;
	}
};

Account * accArr[100];
int accNum = 0;					//���� ����� Account��


int main(void) {
	int choice;
	while (1) {
		choice = 0;
		ShowMenu();
		cout << "����: ";
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
			cout << "���α׷� ����" << endl;
			return 0;
		default:
			cout << "Wrong Entrance" << endl;
		}
	}
}

void ShowMenu(void) {
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. ��    ��" << endl;
	cout << "3. ��    ��" << endl;
	cout << "4. ��ü�� �ܾ���ȸ" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void MakeAccount(void) {
	int id;
	char name[NAME_LEN];
	int money;
	cout << endl << endl << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "�̸�: ";
	cin >> name;
	cout << "�Աݾ�: ";
	cin >> money;
	accArr[accNum++] = new Account(id, money, name);
}

void DepositMoney(void) {
	int Money, ID;
	cout << endl << endl << "[�Ա�]" << endl;
	cout << "����ID: "; cin >> ID;
	cout << "�Աݾ�: "; cin >> Money;
	for (int i = 0; i <= accNum; i++) {
		if (accArr[i]->ID() == ID) {
			accArr[i]->Deposit(Money);
			cout << "�ԱݿϷ�" << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID�Դϴ�." << endl;
}

void WithDrawMoney(void) {
	int Money, ID;
	cout << endl << endl << "[���]" << endl;
	cout << "����ID: "; cin >> ID;
	cout << "��ݾ�: "; cin >> Money;
	for (int i = 0; i <= accNum; i++) {
		if (accArr[i]->ID() == ID) {
			if (accArr[i]->WithDraw(Money)==0) {
				cout << "�ܾ׺��� ����� �� �� �����ϴ�." << endl;
				return;
			}
			cout << "��ݿϷ�" << endl;
		}
	}
	cout << "��ȿ���� ���� ID�Դϴ�." << endl;
}

void ShowAllAccInfo(void) {
	cout << endl;
	for (int i = 0; i < accNum; i++) {
		accArr[i]->AccInfo();
	}
}
