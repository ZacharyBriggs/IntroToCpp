#pragma once
#include <iostream>
class Point2D
{
private:
	float mX;
	float mY;
public:
	Point2D();
	Point2D(float x, float y);
	Point2D operator+(const Point2D & other); //Adds 2 Point2D objects
	Point2D operator-(const Point2D & other); //Subtracts 2 Point2D objects
	Point2D operator*(const Point2D & other); //Finds product of two Point2D objects
	Point2D operator*(float other);			  //Scales the value of a Point2D obj by a
	//value passed in
	friend std::ostream& operator<<(std::ostream&stream, const Point2D &);
	float GetX();							  //Gets the value of mX
	float GetY();							  //Gets the value of mY
	void PrintPoint();						  //Prints both mX and mY
	bool operator==(const Point2D & other);	  //Returns true/false depending on if a
	//Point2D class is equal to another
	Point2D operator+=(const Point2D & other);//Adds two Point2Ds and sets the first equal
	//the sum
	Point2D operator-=(const Point2D & other);//Subtracts two Point2Ds and sets the first
	//equal to the remainder
};
