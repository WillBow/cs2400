/*
 *        File: overflow.cc
 *      Author: Nasseef Abukamail
 *        Date: February 04, 2019
 * Description: Test overflow and underflow for integers.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {


    short x = 32767; //max value
	x = x + 1;
	cout << "X = " << x << endl;  
	x = -32768; 	 //min value
	x = x - 1;
	cout << "X = " << x << endl;

	//Try unsigned numbers
	unsigned short y = 65535;
	y++;
	cout << "Y = " << y << endl;
    return 0;
}// main