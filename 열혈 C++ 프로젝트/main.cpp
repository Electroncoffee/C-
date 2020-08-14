#include <iostream>
#include "Car.h"
using namespace std;

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