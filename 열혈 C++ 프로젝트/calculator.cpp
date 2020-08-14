#include <iostream>
#include "calculator.h"
using namespace std;

void Carculator::Init(void) {
	numAdd = 0;
	numMin = 0;
	numDiv = 0;
	numMul = 0;
}
void Carculator::ShowOpCount(void) {
	cout << "����: " << numAdd << endl;
	cout << "����: " << numMin << endl;
	cout << "������: " << numDiv << endl;
	cout << "����: " << numMul << endl;
}
double Carculator::Add(double x, double y) {
	numAdd++;
	return x + y;
}
double Carculator::Min(double x, double y) {
	numMin++;
	return x - y;
}
double Carculator::Div(double x, double y) {
	numDiv++;
	return x / y;
}
double Carculator::Mul(double x, double y) {
	numMul++;
	return x * y;
}