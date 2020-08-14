#include <iostream>
using namespace std;

//����ü
struct car
{
	//������ ��� ����
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

	void ShowCarState();	//�������� ���
	void Accel();			//�׼�, �ӵ�����
	void Break();			//�극��ũ, �ӵ�����
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
	cout << "�г���: " << gamerID << endl;
	cout << "���ᷮ: " << fuelgauge << "&" << endl;
	cout << "����ӵ�: " << curSpeed << "km/h" << endl << endl;
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
	c++���� ����ü�� �Լ����� ���� �� �ִ�.
	���� enum(������)��� ���� �����ϴ�.
	����ü �Լ��� ����ü������ �Ű������� �������� �ʾƵ� ��밡���ϴ�.
	
	����ü �Լ��� �ζ���ó���� ��������
	����ü�ۿ��� �Լ��� ������ �� �ζ���ó���� �������.
	���Ϻ��ҷ� Ŭ������ ����� ����Լ� ���ǰ� �ٸ� ���Ͽ� ������
	�ζ��� ó���� ������Ͽ� �־���Ѵ�.
*/