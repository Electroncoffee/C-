#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);			//�޴����
void MakeAccount(void);			//���°����� ���� �Լ�
void DepositMoney(void);		//�Ա�
void WithDrawMoney(void);		//���
void ShowAllAccInfo(void);		//�ܾ���ȸ

typedef struct {
	int accID;					//���¹�ȣ
	int balance;				//�ܾ�
	char cusName[NAME_LEN];		//���̸�
} Account;

Account accArr[100];			//�������� ���� ����ü �迭
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
	cout << endl << endl << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> accArr[accNum].accID;
	cout << "�̸�: ";
	cin >> accArr[accNum].cusName;
	cout << "�Աݾ�: ";
	cin >> accArr[accNum].balance;
	accNum++;
}

void DepositMoney(void) {
	int Money, ID;
	cout << endl << endl << "[�Ա�]" << endl;
	cout << "����ID: "; cin >> ID;
	cout << "�Աݾ�: "; cin >> Money;
	for (int i = 0; i <= accNum; i++) {
		if (accArr[i].accID == ID) {
			accArr[i].balance += Money;
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
		if (accArr[i].accID == ID) {
			if (accArr[i].balance < Money) {
				cout << "�ܾ׺��� ����� �� �� �����ϴ�." << endl;
				return;
			}
			accArr[i].balance -= Money;
			cout << "��ݿϷ�" << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID�Դϴ�." << endl;
}

void ShowAllAccInfo(void) {
	cout << endl;
	for (int i = 0; i < accNum; i++) {
		cout << endl << "����ID: " << accArr[i].accID << endl;
		cout << "�̸�: " << accArr[i].cusName << endl;
		cout << "�ܾ�: " << accArr[i].balance << endl << endl;
	}
}
