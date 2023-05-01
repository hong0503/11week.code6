#include<iostream>
#include "Rectangle.h"
using namespace std;
int Rectangle::numOfRect = 0;
Rectangle::Rectangle() {

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
void Rectangle::setWidth(double w) {
    width = w;
}
double Rectangle::getHeight() const {
    return height;
}
void Rectangle::setHeight(double h) {
    height = h;
}
double Rectangle::getArea() const {
    return width * height;
}
void Rectangle::print() {
    cout << height << " " << width << " " << getArea() << endl;
}
int Rectangle::getNumOfRect() {
    return numOfRect;
}
