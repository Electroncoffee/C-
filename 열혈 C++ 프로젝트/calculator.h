#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

class Carculator
{
private:
	int numAdd;
	int numMin;
	int numDiv;
	int numMul;
public:
	void Init(void);
	void ShowOpCount(void);
	double Add(double x, double y);
	double Min(double x, double y);
	double Div(double x, double y);
	double Mul(double x, double y);
};
#endif