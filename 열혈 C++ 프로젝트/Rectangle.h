#pragma once
#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "point.h"

class Rectangle
{
private:
	point upLeft;
	point lowRight;
public:
	Rectangle(const int x1, const int y1, const int x2, const int y2);
	void ShowRecInfo() const;
};
#endif