#define student_h
#include "degree.h"
#include <iostream>
#include <string>

using namespace std;

class Student {
public:

    Student()
    {

    }
    Student(string id, string firstName, string lastName, string emailAddress, int age, int* daystoComplete, DegreeProgram degreeProgram);
    ~Student();


    string Getid();
    string GetfirstName();
    string GetlastName();
    string GetemailAddress();
    int Getage();
    int* GetdaystoComplete();
    DegreeProgram GetDegreeProgram();


    void Setid(string id);
    void SetfirstName(string firstName);
    void SetlastName(string lastName);
    void Setage(int age);
    void SetemailAddress(string emailAddress);
    void SetDaystoComplete(int daystoComplete[]);
    void SetDegreeProgram(DegreeProgram degreeProgram);


    void print();


private:
    string id;
    string firstName;
    string lastName;
    int age;
    string emailAddress;
    int daystoComplete[3] = {};
    DegreeProgram degreeProgram;
};

