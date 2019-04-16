/*
 *        File: rectangle_main.cc
 *      Author: Nasseef Abukamail w/ additions by Will Bower
 *        Date: April 15, 2019
 * Description: Rectangle class, now with added functions!
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class Rectangle {
public:
    //constructors
    Rectangle(); //0, 0
    Rectangle(double newLength, double newWidth); //validate the parameters

    //getters
    double getLength();
    double getWidth();

    //setters
    void setLength(double newLength);
    void setWidth(double newWidth);

    //helper
    void output();
    double area();




private:
    double length;
    double width;
};
//function prototypes

int main(int argc, char const *argv[]) {
    Rectangle r(5, 4);

    r.output();
    r.setLength(50);
    r.setWidth(40);
    r.output();
    cout << "Length is " << r.getLength() << endl;

    return 0;
}// main

Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}

Rectangle::Rectangle(double newLength, double newWidth)
{
    length = newLength;
    width = newWidth;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

void Rectangle::setLength(double newLength)
{
    if (newLength >= 0)
    {
        length = newLength;
    }
}

void Rectangle::setWidth(double newWidth)
{
    if (newWidth >= 0)
    {
        width = newWidth;
    }
}

void Rectangle::output()
{
    cout << getLength() << endl << getWidth() << endl;
}

double Rectangle::area()
{
    double area = width * length;

    return area;
}