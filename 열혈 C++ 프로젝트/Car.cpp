#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;

// ���� ���� �б�
void car::InitMembers(const char * ID, int fuel) {
	strcpy_s(gamerID, sizeof(gamerID), ID);
	fuelgauge = fuel;
	curSpeed = 0;
}

// ���� ���� ���
void car::ShowCarState() {
	cout << "�г���: " << gamerID << endl;
	cout << "���ᷮ: " << fuelgauge << "%" << endl;
	cout << "����ӵ�: " << curSpeed << "km/h" << endl << endl;
}

// �ӵ� ����
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

// �ӵ� ����
void car::Break() {
	if (curSpeed <= CAR_CONST::BRK_STEP) {
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}