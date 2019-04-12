/*
 *        File: student-class.cc
 *      Author: Nasseef Abukamail
 *        Date: April 08, 2019
 * Description: Student structure example with vectors.
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;
class Student {
public:
    //Default contructor
    Student();
    Student(string newName);
    //The following two functions need to be implemented
    Student(int newId);
    Student(int newId, string newName, double newScore);

    //getters or accessors
    int getId();
    string getName();
    double getScore();

    //setters or mutators
    void setId(int newId);
    void setName(string newName);
    void setScore(double newScore);

    //helper functions
    void output();

private:
    int id;  //id must be >= 0
    string name;
    double score; //>= 0, -1 default
}; //semicolon is important


// function prototypes
// void printStudent(const Student &st);
// void inputStudent(Student &st);

int main(int argc, char const *argv[]) {

    Student s;  //assign default values automatically
    s.output();

    Student s2("Jim");
    s2.output();

    Student s3(123, "Ed", 57.5);

    s.setId(123);
    s.setId(-123);
    s.setName("Bob");
    s.output();
    s.setScore(85);
    s.output();




    return 0;
}  // main

//default constructor
Student::Student() {
    id = 0;
    name = "N/A";
    score = -1;
}

Student::Student(string newName) {
    name = newName;
    id = 0;
    score = -1;
}
int Student::getId() {
    return id;
}

 string Student::getName(){
    return name;
}

 double Student::getScore(){
    return score;
}


void Student::setId(int newId) {
    if (newId >= 0)
    {
        id = newId;
    }
}

void Student::setName(string newName){
    name = newName;
}

 void Student::setScore(double newScore){
     if (newScore >= 0)
     {
         score = newScore;
     }
}

 void Student::output(){
    cout << "Student: " << "(ID: " << id << ", Name: " << name
         << ", Score: " << score << ")" << endl;

 }