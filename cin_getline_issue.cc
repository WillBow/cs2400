/*
 *        File: cin_getline_issue.cc
 *      Author: Nasseef Abukamail
 *        Date: March 06, 2019
 * Description: Demonstrates the problem with using getline after an extraction operator
 *              (cin >> x)
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    int num;
    cout << "Enter a number: ";
    cin >> num;
    cin.ignore(100, '\n');  //try without this line first
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "num: " << num << endl;
    cout << "Name: " << name << endl;
    return 0;
}// main