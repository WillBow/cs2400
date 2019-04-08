/*
 *        File: structures.cc
 *      Author: Nasseef Abukamail
 *        Date: April 08, 2019
 * Description: Student structure example with vectors.
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;
struct Student {
    int id; //
    string name;
    double score;
}; //semicolon is important

// function prototypes
void printStudent(const Student &st);
void inputStudent(Student &st);

int main(int argc, char const *argv[]) {

    Student s;
    //inputStudent(s);
    printStudent(s);

    //Create a vector of Student objects
    vector<Student> allStudents;
    Student s2 = {1234, "Bob Smith", 90.0};
    allStudents.push_back(s2);

    allStudents[0].id = 4567;

    printStudent(allStudents.at(0));

    //Example inputing multiple objects into a vector
    //Note: the following example is incomplete
    for(size_t i = 0; i < 2; i++)
    {
        int id;
        string name;
        double score;
        //input or assign values to id, name, score
        //

        //Create a Student object
        Student s = {id, name, score};

        //Add the Student object to the vector
        allStudents.push_back(s);
    }

    return 0;
}  // main
void printStudent(const Student &st) {
    cout << "ID: " << st.id << endl
         << "Name: " << st.name << endl
         << "Score: " << st.score << endl;
}
void inputStudent(Student &st) {
    cout << "Enter student's ID: ";
    cin >> st.id;
    cin.ignore(100, '\n');
    cout << "Enter student's name: ";
    getline(cin, st.name);
    cout << "Enter student's score: ";
    cin >> st.score;
}