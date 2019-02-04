/*
 *        File: switch.cc
 *      Author: Nasseef Abukamail
 *        Date: February 04, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    int choice;
    cout << "Enter a choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            cout << "You entered 1" << endl;
            break;
        case 2:
            cout << "You entered 2" << endl;
            break;
        case 3: case 4:
        
            cout << "You entered 3 or 4" << endl;
            break;
        default:
            cout << "You entered something else" << endl;
            break;
    }
    return 0;
}// main