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
    void setWidth(double);
    double getHeight() const;
    void setHeight(double);
    double getArea() const;
    void print();
    static int getNumOfRect();
};
#endif
