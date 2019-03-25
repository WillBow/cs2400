/*
 *        File: random.cc
 *      Author: Nasseef Abukamail
 *        Date: March 25, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {
    int randomInteger;
    srand(time(NULL));
    for(size_t i = 0; i < 5; i++)
    {
        randomInteger = rand();
        cout << randomInteger << endl;
    }
    return 0;
}// main

/* Extra credit: Due Tuesday 3/26/2019 (11:59 PM)
 * Write a program that creates 20 random integers and stores them into
 * an array of integers.
 * Write the sequential search function.
 * In your main program, output all the elements of the array. Ask the user for
 * a target number and call the search function to find and locations of the target
 * in the array. Output the location.
 *
 * Create a public repository on GitHub, push your code to the repository and
 * tag me (@nasseef) in the final commit message. Please make sure your program works
 * before you tag me.
 * Do not email me your program.
 */
