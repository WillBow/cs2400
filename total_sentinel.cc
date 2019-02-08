/*
 *        File: total_sentinel.cc
 *      Author: Nasseef Abukamail
 *        Date: February 08, 2019
 * Description: Read numbers from the keyboard and find the total
 *              and the average. The numbers are terminated by a
 *              negative value (sentinel).
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

// function prototypes

int main(int argc, char const *argv[]) {
    int total = 0;
    int count = 0;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    while (number >= 0) {
        count++; //count = count + 1; or count += 1;
        total += number;  // total = total + number;
        cout << "Enter a number: ";
        cin >> number;
    }
    cout << "Total is " << total << endl;
    cout << "Count is " << count << endl;
    //calculate the average (exercise for students)
    return 0;
}  // main