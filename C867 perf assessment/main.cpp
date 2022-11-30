#include "roster.h"
#include <iostream>

int main()
{
    cout << "C867: Scripting and Programming - Applications" << endl;
    cout << "C++" << endl;
    cout << "001497856" << endl;
    cout << "Jared Hines" << endl;
    cout << "jhine85@wgu.edu" << endl;
    int a1[3] = { 30, 35, 40 };
    int a2[3] = { 50, 30, 40 };
    int a3[3] = { 20, 40, 33 };
    int a4[3] = { 50, 58, 40 };
    int a5[3] = { 30, 30, 30 };
    Roster* classRoster = new Roster();

    classRoster->add("A1", "John", "Smith", "John1989@gm ail.com", 40, a1, SECURITY);
    classRoster->add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 30, a2, NETWORK);
    classRoster->add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 30, a3, SOFTWARE);
    classRoster->add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, a4, SECURITY);
    classRoster->add("A5", "Jared", "Hines", "jhine85@wgu.edu", 24, a5, SOFTWARE);

    cout << "============================================================================" << endl;
    cout << "Printing all students:" << endl;
    classRoster->printAll();
    cout << endl;


    cout << "============================================================================" << endl;
    cout << "Invalid email:" << endl;
    classRoster->printInvalidEmails();
    cout << endl;


    cout << "============================================================================" << endl;
    cout << "Average days in course: " << endl;
    classRoster->printAverageDaysInCourse("A1");
    classRoster->printAverageDaysInCourse("A2");
    classRoster->printAverageDaysInCourse("A3");
    classRoster->printAverageDaysInCourse("A4");
    classRoster->printAverageDaysInCourse("A5");
    cout << endl;



    cout << "============================================================================" << endl;
    cout << "Students in SOFTWARE program:" << endl;
    classRoster->printByDegreeProgram(SOFTWARE);
    cout << endl << "Students in NETWORK program:" << endl;
    classRoster->printByDegreeProgram(NETWORK);
    cout << endl << "Students in by SECURITY program:" << endl;
    classRoster->printByDegreeProgram(SECURITY);
    cout << endl << endl;


    cout << "============================================================================" << endl;
    classRoster->remove("A1");


    classRoster->printAll();


    cout << "============================================================================" << endl;
    classRoster->remove("A3");
    cout << endl;

    return 0;
}
