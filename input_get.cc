/*
    File: input.cc
    Author: Mark May
    Date: 2/28/19
    Description: This program reads in from a file, using one call to the get function at a time.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    ifstream ins;   //The input stream used to open the example file
    char letter;    //Used for reading in with the get function
    char next;      //Used to read in the newline character from the keyboard when the user hits enter

    ins.open("example.txt");

    //ALWAYS check if your files failed to open 
    if (ins.fail()) {
        cout << "Failed to open the example file!" << endl;
        exit(1);
    }

    cout << "Here is one call to your desired input method, press enter to see more calls." << endl;
    ins.get(letter);
    
    while (!ins.eof()) {
        cout << letter;

        cin.get(next);  //Used to read in the newline characters when the user hits enter
        ins.get(letter);
    }

    ins.close();    //ALWAYS close your files when finished!

    return 0;
}