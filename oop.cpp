#include <iostream>
#include <string>
#include <map>
using namespace std;

//Parent class
class Person {
protected:
    string name;
    string password;
public:
    Person (string nm, string pd) : name(nm), password(pd) { }
    string getName() { return name; }
    bool checkP(string input) { return input == password; }
};

//Creating Student class whose parent class is Person
class Student : public Person {
private:
    int marks;
public:
    Student(string name, string password) : Person(name, password), marks(0) {} //Initializing Student
    int getMarks(string password) {
        if (this->checkP(password)) { return marks; } //Returning mark after checking password
        else {
            cout << "Access denied. Incorrect password." << endl;
            return -1;
        }
    }
    friend class Teacher;
    //Declaring Teacher as friend class to edit marks in Student class
};

class Teacher : public Person {
public:
    Teacher(string name, string password) : Person(name, password) {} //Initializing Teacher
    void changeM(Student& student, int newMarks) {
        string sp, tp;
        cout << "Enter student's password: ";
        cin >> sp;
        cout << "Enter teacher's password: ";
        cin >> tp;
        //Checking password
        if (student.checkP(sp) && this->checkP(tp)) {
            //Updating marks
            student.marks = newMarks;
            cout << "Marks updated successfully for " << student.getName() << endl;
        }
        else {
            cout << "Access denied. Incorrect password." << endl;
        }
    }
};

int main(){}