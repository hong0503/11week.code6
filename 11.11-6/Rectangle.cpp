#include"Rectangle.h"
#include<iostream>
using namespace std;
int Rectangle::numOfRect = 0;
Rectangle::Rectangle() {
	width = 0;
	height = 0;
}
Rectangle::~Rectangle() {
	numOfRect--;
}
Rectangle::Rectangle(double w, double h) {
	width = w;
	height = h;
	numOfRect++;
}
double Rectangle::getWidth() const {
	return width;
}
double Rectangle::getHeight() const {
	return height;
}
double Rectangle::getArea() const {
	return width * height;
}
int Rectangle::getNumOfRect() {
	return numOfRect;
} 
void Rectangle::setWidth(double w) {
	width = w;
}
void Rectangle::setHeight(double h) {
	height = h;
}
void Rectangle::print() {
	cout << height <<  " " << width << " " << getArea() << endl;
}
