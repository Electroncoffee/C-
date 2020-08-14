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

	//�׼��� �Լ�(�������� ������ �ʿ��� �� �ִٰ� �ǴܵǴ� �Լ�)(����ϰ� �Ǿ���. �ᱹ)
	bool SetX(int xpos);
	bool SetY(int ypos);

};
#endif // !__POINT_H__

