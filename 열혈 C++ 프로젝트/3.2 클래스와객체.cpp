#include <iostream>
#include <cstring>
using namespace std;

//열거형 상수 선언
namespace CAR_CONST {
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

//클래스
class car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelgauge;
	int curSpeed;
public:
	void InitMembers(const char * ID, int fuel);
	void ShowCarState();	//상태정보 출력
	void Accel();			//액셀, 속도증가
	void Break();			//브레이크, 속도저하
};

int main(void) {
	car proit;
	proit.InitMembers("proit", 100);
	proit.Accel();
	proit.Accel();
	proit.ShowCarState();
	proit.Break();
	proit.ShowCarState();

	car greenteacan;
	greenteacan.InitMembers("greenteacan", 100);
	greenteacan.Accel();
	greenteacan.Break();
	greenteacan.ShowCarState();
	return 0;
}

void car::InitMembers(const char * ID, int fuel) {
	strcpy_s(gamerID, sizeof(gamerID), ID);
	fuelgauge = fuel;
	curSpeed = 0;
}

void car::ShowCarState() {
	cout << "닉네임: " << gamerID << endl;
	cout << "연료량: " << fuelgauge << "&" << endl;
	cout << "현재속도: " << curSpeed << "km/h" << endl << endl;
}
void car::Accel() {
	if (fuelgauge <= 0) {
		return;
	}
	else {
		fuelgauge -= CAR_CONST::FUEL_STEP;
	}
	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}
void car::Break() {
	if (curSpeed <= CAR_CONST::BRK_STEP) {
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}
/*
	구조체struct또한 클래스의 하나이다.
	클래스의 접근제어
	public: 어디서든 접근허용
	protected: 상속관계 일때, 유도 클래스에서의 접근허용
	private: 클래스내에서만 접근허용

	struct: 모든 변수,함수의 접근제어 기본값을 public으로 설정
	class: 모든 변수, 함수의 접근제어 기본값을 private로 설정


	객체의 생성과정
	1. 메모리의 공간의 할당
	2. 이니셜라이저를 이용한 멤버변수(객체)의 초기화
	3. 생성자의 몸체부분 실행
*/