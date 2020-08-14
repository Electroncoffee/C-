#pragma once
#ifndef __POINT_H__
#define __POINT_H__

class point
{
private:
	int x;
	int y;
public:
	point(const int xpos, const int ypos);
	int GetX() const;
	int GetY() const;

	//액세스 함수(사용되지는 않지만 필요할 수 있다고 판단되는 함수)(사용하게 되었다. 결국)
	bool SetX(int xpos);
	bool SetY(int ypos);

};
#endif // !__POINT_H__

