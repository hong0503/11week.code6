#ifndef Rectangle_h
#define Rectangle_h
class Rectangle {
private:
	static int numOfRect;
	double width;
	double height;
public:
	~Rectangle();
	Rectangle();
	Rectangle(double, double);
	double getWidth() const;
	double getHeight() const;
	double getArea() const;
	void setWidth(double);
	void setHeight(double);
	void print();
	static int getNumOfRect();
};
#endif
