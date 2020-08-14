#include <iostream>
using namespace std;

class FruitSeller {
	int mymoney;
	int numofapples;
	int APPLE_PRICE;
public:
	FruitSeller(int money, int apple, int price) {
		mymoney = money;
		numofapples = apple;
		APPLE_PRICE = price;
	}
	void ShowFruitSeller(void) const{
		cout << "�Ǹ��� �������: " << numofapples << "��" << endl;
		cout << "�Ǹ��� �����ݾ�: " << mymoney << "��" << endl;
	}
	int SaleApples(int money) {
		if (money < 0) {
			cout << endl << "�߸��� �ݾ� �Է�" << endl << endl;
		}
		int num = money / APPLE_PRICE;
		mymoney += money;
		numofapples -= num;
		return num;
	}
};

class FruitBuyer {
	int mymoney;
	int numofapples;
public:
	FruitBuyer(int money) {
		mymoney = money;
		numofapples = 0;
	}
	void ShowFruitBuyer(void) const{
		cout << "������ �������: " << numofapples << "��" << endl;
		cout << "������ �����ݾ�: " << mymoney << "��" << endl;
	}
	void BuyApples(FruitSeller &Seller, int money) {
		if (money < 0) {
			cout << endl << "�߸��� �ݾ� �Է�" << endl << endl;
			return;
		}
		numofapples += Seller.SaleApples(money);
		mymoney -= money;
	}
};

int main(void) {
	FruitSeller seller(0,20,1000);
	FruitBuyer buyer(10000);
	buyer.BuyApples(seller, 2000);
	
	cout << "���� �Ǹ��� ��Ȳ" << endl;
	seller.ShowFruitSeller();
	cout << endl << "���� ������ ��Ȳ" << endl;
	buyer.ShowFruitBuyer();

	buyer.BuyApples(seller, -5000);
	cout << "���� �Ǹ��� ��Ȳ" << endl;
	seller.ShowFruitSeller();
	cout << endl << "���� ������ ��Ȳ" << endl;
	buyer.ShowFruitBuyer();

	return 0;
}

/*
ver1.0 �Ϸ�
ver2.0 �Ϸ� (�Ǹ���, �������� ���� �� ���� �Լ��� �����ڷ� ����)
ver3.0 �Ϸ� (�Ǹ����� ��������� 

*/