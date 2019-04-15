/*
 *        File: rectangle_main.cc
 *      Author: Nasseef Abukamail
 *        Date: April 15, 2019
 * Description: Rectangle class. 
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
    cout << "Length " << r.getLength() << endl;

    return 0;
}// main