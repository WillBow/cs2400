/*
 *        File: 2dArrays.cc
 *      Author: Nasseef Abukamail
 *        Date: March 29, 2019
 * Description: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes
void printArraySingle(const int numbers[], int size);
void printArrayDouble(const int numbers2[][4], int numRows, int numCols);
void printArrayDouble2(const int numbers2[][4], int numRows, int numCols);
int main(int argc, char const *argv[]) {

    int numbers[3][4] = {{3, 4, 1, 5}, {6, 7, 1, 9}, {9, 8, 0, 5}};

    printArrayDouble2(numbers, 3, 4);

    return 0;
}// main

void printArrayDouble(const int numbers2[][4], int numRows, int numCols) {

    for(int i = 0; i < numRows; i++)
    {
        printArraySingle(numbers2[i], numCols);
    }
}
void printArraySingle(const int numbers[], int size) {
    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}


void printArrayDouble2(const int numbers2[][4], int numRows, int numCols) {

    for(size_t i = 0; i < numRows; i++)
    {
        for(size_t j = 0; j < numCols; j++)
        {
            cout << numbers2[i][j] << " ";
        }
        cout << endl;
    }

}
