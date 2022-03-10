#include "circle.h"
#include <cmath>
#include <iostream>

using namespace std;

const double MY_PI = 3.14159;

Circle::Circle() {
	radius= 1;
}
Circle::Circle(double radius) {
	this->radius = radius;

}
double Circle::getRadius() const {
	return radius;
}
void Circle::setRadius(double radius) {
	this->radius = radius;
}
double Circle::circumference() const
	{
	return 2 * MY_PI * radius;
	}
double Circle::area() const {
	return MY_PI * pow(radius, 2);
}
