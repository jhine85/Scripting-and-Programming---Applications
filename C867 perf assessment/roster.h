#define roster_h

#include "student.h"
#include <stdio.h>
#include <iostream>
using namespace std;
#include <string>



class Roster {
public:
    Roster()
    {
        RosterArray = new Student[6]{};
    }
    void add(string id, string firstName, string lastName, string emailAddress, int age, int daystocomplete[], DegreeProgram degreeProgram);
    void remove(string id);
    void printAll();
    void printAverageDaysInCourse(string id);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);


private:
    int maxCapacity;
    int studentCount;
    Student* RosterArray;
};


