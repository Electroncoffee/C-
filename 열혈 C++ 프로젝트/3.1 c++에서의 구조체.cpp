#include <iostream>
using namespace std;

//구조체
struct car
{
	//열거형 상수 선언
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
	char gamerID[ID_LEN];
	int fuelgauge;
	int curSpeed;

	void ShowCarState();	//상태정보 출력
	void Accel();			//액셀, 속도증가
	void Break();			//브레이크, 속도저하
};

int main(void) {
	car proit = { "proit",100,0 };
	proit.Accel();
	proit.Accel();
	proit.ShowCarState();
	proit.Break();
	proit.ShowCarState();

	car greenteacan = { "greenteacan",100,0 };
	greenteacan.Accel();
	greenteacan.Break();
	greenteacan.ShowCarState();
	return 0;
}

inline void car::ShowCarState() {
	cout << "닉네임: " << gamerID << endl;
	cout << "연료량: " << fuelgauge << "&" << endl;
	cout << "현재속도: " << curSpeed << "km/h" << endl << endl;
}
inline void car::Accel() {
	if (fuelgauge <= 0) {
		return;
	}
	else {
		fuelgauge -= FUEL_STEP;
	}
	if (curSpeed + ACC_STEP >= MAX_SPD) {
		curSpeed = MAX_SPD;
		return;
	}
	curSpeed += ACC_STEP;
}
inline void car::Break() {
	if (curSpeed <= BRK_STEP) {
		curSpeed = 0;
		return;
	}
	curSpeed -= BRK_STEP;
}
/*
	c++에서 구조체는 함수또한 담을 수 있다.
	또한 enum(열거형)상수 선언도 가능하다.
	구조체 함수는 구조체변수를 매개변수로 전달하지 않아도 사용가능하다.
	
	구조체 함수는 인라인처리가 되있으나
	구조체밖에서 함수를 정의할 때 인라인처리가 사라진다.
	파일분할로 클래스의 선언과 멤버함수 정의가 다른 파일에 있을때
	인라인 처리는 헤더파일에 넣어야한다.
*/