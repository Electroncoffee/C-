#include <iostream>
#include <cstring>
using namespace std;

//������ ��� ����
namespace CAR_CONST {
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

//Ŭ����
class car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelgauge;
	int curSpeed;
public:
	void InitMembers(const char * ID, int fuel);
	void ShowCarState();	//�������� ���
	void Accel();			//�׼�, �ӵ�����
	void Break();			//�극��ũ, �ӵ�����
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
	cout << "�г���: " << gamerID << endl;
	cout << "���ᷮ: " << fuelgauge << "&" << endl;
	cout << "����ӵ�: " << curSpeed << "km/h" << endl << endl;
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
	����üstruct���� Ŭ������ �ϳ��̴�.
	Ŭ������ ��������
	public: ��𼭵� �������
	protected: ��Ӱ��� �϶�, ���� Ŭ���������� �������
	private: Ŭ������������ �������

	struct: ��� ����,�Լ��� �������� �⺻���� public���� ����
	class: ��� ����, �Լ��� �������� �⺻���� private�� ����


	��ü�� ��������
	1. �޸��� ������ �Ҵ�
	2. �̴ϼȶ������� �̿��� �������(��ü)�� �ʱ�ȭ
	3. �������� ��ü�κ� ����
*/