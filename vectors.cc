/*
 *      Author: Nasseef Abukamail
 *        Date: April 5, 2019
 * Description: A program to demonstrate the vector STL.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;
//function prototypes
void printList(vector <int> v);

int main() {

    vector <int> v2(5);
    v2[1] = 3;
    v2[2] = 5;
    cout << "Element 1 + 2 = " << (v2.at(1) + v2[2]) << endl;
    cout << "Size: " << v2.size() << endl;

    vector<int> v; //empty vector
    cout << "Size: " << v.size() << endl;


    v.push_back(99);
    v.push_back(88);
    v.push_back(50);
    cout << "Size: " << v.size() << endl;
    //print first element
    cout << "First: "<< v.at(0) << endl;
    //first and last elements
    cout << "First & last: "<< v.front() << " "
          << v.back() << endl;

    //print all elements
    cout << "All the elements" << endl;
    printList(v);

    //find an element
    v.insert(v.begin()+1, 77);

    cout << "All the elements after insert at 1" << endl;
    printList(v);
   
    v.erase(v.begin()+2);
    cout << "All the elements after erasing 2" << endl;
    printList(v);
    return 0;
}

void printList(vector <int> v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }
}
