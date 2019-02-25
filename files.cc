/*
 *        File: files.cc
 *      Author: Nasseef Abukamail
 *        Date: February 25, 2019
 * Description: A program to demonstrate text files.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
//1
#include <fstream>

using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {
    //2
    ifstream inStream;
    string fileName;

    cout << "Enter a file name: ";
    cin >> fileName;
    //3
    inStream.open(fileName.c_str());
    if (inStream.fail()) {
        cout << "Error: file does not exist" <<endl;
        exit(1);
    }

    //4
    int num;
    int total = 0;
    inStream >> num;
    while(!inStream.eof()){ //inStream.eof() == false
        cout << "Num = " << num << endl;
        total += num;
        inStream >> num;
    }
    cout << "Total = " << total << endl;
    // inStream >> num;
    // cout << "Num = " << num << endl;

    //5
    inStream.close();
    return 0;
}// main