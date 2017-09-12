#include "Point2D.h"

Point2D::Point2D()
{
	mX = 0;
	mY = 0;
}

Point2D::Point2D(float posX, float posY)
{
	mX = posX;
	mY = posY;
}

Point2D Point2D::Add(Point2D posXY)
{
	Point2D newPoint;
	newPoint.mX = mX + posXY.mX;
	newPoint.mY = mY + posXY.mY;
	return newPoint;
}
