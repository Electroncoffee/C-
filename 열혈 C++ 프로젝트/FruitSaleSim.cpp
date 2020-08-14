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
		cout << "판매자 소지사과: " << numofapples << "개" << endl;
		cout << "판매자 소지금액: " << mymoney << "원" << endl;
	}
	int SaleApples(int money) {
		if (money < 0) {
			cout << endl << "잘못된 금액 입력" << endl << endl;
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
		cout << "구매자 소지사과: " << numofapples << "개" << endl;
		cout << "구매자 소지금액: " << mymoney << "원" << endl;
	}
	void BuyApples(FruitSeller &Seller, int money) {
		if (money < 0) {
			cout << endl << "잘못된 금액 입력" << endl << endl;
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
	
	cout << "과일 판매자 현황" << endl;
	seller.ShowFruitSeller();
	cout << endl << "과일 구매자 현황" << endl;
	buyer.ShowFruitBuyer();

	buyer.BuyApples(seller, -5000);
	cout << "과일 판매자 현황" << endl;
	seller.ShowFruitSeller();
	cout << endl << "과일 구매자 현황" << endl;
	buyer.ShowFruitBuyer();

	return 0;
}

/*
ver1.0 완료
ver2.0 완료 (판매자, 구매자의 최초 값 수정 함수를 생성자로 변경)
ver3.0 완료 (판매자의 사과가격을 

*/