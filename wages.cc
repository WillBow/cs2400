/*
 *        File: wages.cc
 *      Author: Nasseef Abukamail
 *        Date: January 23, 2019
 * Description: Add Description
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

const int MAX_HOURS = 40;

int main(int argc, char const *argv[]) {
    // 1
    double rate;
    double wages;

    cout << "Enter the rate: ";
    cin >> rate;
    // 2
    double hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    while (hours >= 0 && rate >= 0) {
        // 3 calculation
        if (hours > 40) {  // overtime
            // true block
            wages = (hours - MAX_HOURS) * 1.5 * rate + MAX_HOURS * rate;
        } else {  // regular pay
            // false block
            wages = rate * hours;
        }

        // 4 output
        cout << "Wages = " << wages << endl;
        cout << "Enter the rate: ";
        cin >> rate;
        // 2
       
        cout << "Enter the number of hours: ";
        cin >> hours;
    }
    return 0;
}  // main