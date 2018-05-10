
#include <iostream>
#include "vector3D.h"

using namespace std;

Vector3D::Vector3D()
{
	x = 0;
	y = 0;
	z = 0;
}

Vector3D::Vector3D(double x, double y, double z)
{
	x = x;
	y = y;
	z = z;
}

double Vector3D::getX() const
{
	return x;
}

double Vector3D::getY() const
{
	return y;
}

double Vector3D::getZ() const
{
	return z;
}

Vector3D Vector3D::operator+(const Vector3D & secondVector) const
{
	Vector3D temp;
	temp.x = x + secondVector.x;
	temp.y = y + secondVector.y;
	temp.z = z + secondVector.z;
	return temp;
}

Vector3D Vector3D::operator-(const Vector3D & secondVector) const
{
	Vector3D temp;
	temp.x = x - secondVector.x;
	temp.y = y - secondVector.y;
	temp.z = z - secondVector.z;
	return temp;
}

Vector3D Vector3D::operator-() const
{
	Vector3D temp;
	if (x != 0) {
		temp.x = -x;
	}
	else {
		temp.x = 0;
	}
	if (y != 0) { 
		temp.y = -y; 
	}
	else {
		temp.y = 0;
	}
	if (z != 0) { 
		temp.z = -z; 
	}
	else {
		temp.z = 0;
	}
	
	return temp;
}

Vector3D Vector3D::operator*(double number) const
{
	Vector3D temp;
	if (number != 0) {
		temp.x = x*number;
		temp.y = y*number;
		temp.z = z*number;
	}
	else {
		temp.x = 0;
		temp.y = 0;
		temp.z = 0;
	}
	return temp;
}


Vector3D operator*(double number, const Vector3D & vector)
{
	Vector3D temp;
	if (number != 0) {
		temp.x = number*(vector.x);
		temp.y = number*(vector.y);
		temp.z = number*(vector.z);
	}
	else {
		temp.x = 0;
		temp.y = 0;
		temp.z = 0;
	}
	return temp;
}

std::istream & operator>>(std::istream & iStream, Vector3D & vector)
{
	char bracket_one, comma_one, bracket_two, comma_two;
	iStream >> bracket_one >> vector.x >> comma_one >> vector.y >> comma_two >> vector.z >> bracket_two;
	return iStream;
}

std::ostream & operator<<(std::ostream & oStream, const Vector3D & vector)
{
	oStream << "(" << vector.getX() << "," << vector.getY() << "," << vector.getZ() << ")";
	return oStream;
}
