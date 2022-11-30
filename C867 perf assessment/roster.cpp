#include "roster.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;


bool isChar(char c)
{
    return ((c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z'));
}


bool isDigit(const char c)
{
    return (c >= '0' && c <= '9');
}


bool is_valid(string email)
{

    if (!isChar(email[0])) {


        return 0;
    }

    int At = -1, Dot = -1;


    for (int i = 0;
        i < email.length(); i++) {

        // If the character is '@'
        if (email[i] == '@') {

            At = i;
        }

        // If character is '.'
        else if (email[i] == '.') {

            Dot = i;
        }
    }


    if (At == -1 || Dot == -1)
        return 0;


    if (At > Dot)
        return 0;


    return !(Dot >= (email.length() - 1));
}
void Roster::add(string id, string firstName, string lastName, string emailAddress, int age, int daysToComplete[], DegreeProgram degreeProgram) {
    int a1[3] = { daysToComplete[0],daysToComplete[1],daysToComplete[2] };
    RosterArray[studentCount] = Student(id, firstName, lastName, emailAddress, age, a1, degreeProgram);
    studentCount++;
}


void Roster::remove(string id) {
    int  i, elem, j, found = 0;
    for (i = 0; i < studentCount; i++)
    {
        if (RosterArray[i].Getid() == id) {
            for (j = i; j < (studentCount); j++)
                RosterArray[j] = RosterArray[j + 1];
            found++;
            i--;
            studentCount--;
        }
    }
    if (found == 0)
        cout << "\student isn't found in the Array!";
    else
        cout << "\student Deleted Successfully!";

}


void Roster::printAll() {
    for (int i = 0; i < studentCount; ++i) {
        RosterArray[i].print();
    }
}


void Roster::printAverageDaysInCourse(string id) {
    for (int i = 0; i < studentCount; ++i) {
        if (RosterArray[i].Getid() == id) {
            cout << "Student ID " << RosterArray[i].Getid() << ": ";
            int* days = RosterArray[i].GetdaystoComplete();
            cout << "Average days in courses: " << (days[1] + days[2] + days[3]) / 3 << endl;
            return;
        }
    }
}

void Roster::printInvalidEmails() {
    for (int i = 0; i < studentCount; ++i) {
        string email = RosterArray[i].GetemailAddress();
        cout << "Invalid emails are:" << email << endl;
        bool ans = is_valid(email);
        if (!ans) {
            cout << RosterArray[i].GetemailAddress() << endl;
        }

    }
}


void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < studentCount; ++i) {
        if (RosterArray[i].GetDegreeProgram() == degreeProgram) {
            RosterArray[i].print();
        }
    }
}
