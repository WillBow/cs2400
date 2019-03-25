/*
 *        File: argc-argv.cc
 *      Author: Nasseef Abukamail
 *        Date: March 22, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    cout << "Number of arguments: " << argc << endl;
    for(size_t i = 0; i < argc; i++)
    {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

    return 0;
}// main

