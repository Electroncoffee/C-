#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;

// 유저 정보 읽기
void car::InitMembers(const char * ID, int fuel) {
	strcpy_s(gamerID, sizeof(gamerID), ID);
	fuelgauge = fuel;
	curSpeed = 0;
}

// 상태 정보 출력
void car::ShowCarState() {
	cout << "닉네임: " << gamerID << endl;
	cout << "연료량: " << fuelgauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/h" << endl << endl;
}

// 속도 증가
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

// 속도 감소
void car::Break() {
	if (curSpeed <= CAR_CONST::BRK_STEP) {
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}