#include <iostream>
using namespace std;

typedef struct __Point {
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2);

int main(void) {
	Point *ptr1 = new Point;
	Point &p1 = *ptr1;
	Point *ptr2 = new Point;
	Point &p2 = *ptr2;
	Point *ptr3 = new Point;
	Point &result = *ptr3;

	cout << "ù��° ��ǥ x��: ";
	cin >> p1.xpos;
	cout << "ù��° ��ǥ y��: ";
	cin >> p1.ypos;
	cout << "�ι�° ��ǥ x��: ";
	cin >> p2.xpos;
	cout << "�ι�° ��ǥ y��: ";
	cin >> p2.ypos;

	result = PntAdder(p1, p2);

	cout << "�� �� ��ǥ�� ����" << endl;
	cout << "x: " << result.xpos << endl;
	cout << "y: " << result.ypos << endl;

	delete ptr1;
	delete ptr2;
	delete ptr3;

	return 0;
}

Point& PntAdder(const Point &p1, const Point &p2) {
	Point *result = new Point;
	result->xpos = p1.xpos + p2.xpos;
	result->ypos = p1.ypos + p2.ypos;

	return *result;
}