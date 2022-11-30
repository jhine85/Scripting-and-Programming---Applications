#include "student.h"

Student::Student(string id, string firstName, string lastName, string emailAddress, int age, int daystoComplete[], DegreeProgram degreeProgram) {
    this->id = id;
    this->firstName = firstName;
    this->lastName = lastName;
    this->age = age;
    this->emailAddress = emailAddress;
    for (int i = 0; i < 3; i++) {
        this->daystoComplete[i] = daystoComplete[i];
    }
    this->degreeProgram = degreeProgram;
}


Student::~Student() {

}

string Student::Getid() {
    return
        id;
}

string Student::GetfirstName() {
    return firstName;
}

string Student::GetlastName() {
    return lastName;
}

int Student::Getage() {
    return age;
}

string Student::GetemailAddress() {
    return emailAddress;
}

int* Student::GetdaystoComplete() {
    return daystoComplete;
}
DegreeProgram Student::GetDegreeProgram() {
    return SECURITY;
}


void Student::Setid(string id) {
    this->id = id;
    return;
}
void Student::SetfirstName(string firstName) {
    this->firstName = firstName;
    return;
}
void Student::SetlastName(string lastName) {
    this->lastName = lastName;
    return;
}

void Student::Setage(int age) {
    this->age = age;
    return;
}

void Student::SetemailAddress(string emailAddress) {
    this->emailAddress = emailAddress;
    return;
}

void Student::SetDaystoComplete(int daystoComplete[])
{
    for (int i = 0; i < 3; i++) {
        this->daystoComplete[i] = daystoComplete[i];
    }
}

void Student::SetDegreeProgram(DegreeProgram degreeProgram) {
    this->degreeProgram = degreeProgram;
}



void Student::print() {
    cout << "ID: " << id << endl;
    cout << "First name: " << firstName << endl;
    cout << "Last name: " << lastName << endl;
    cout << "Email: " << emailAddress << endl;
    cout << "Age: " << age << endl;
    cout << "Days In Course:\t";
    for (int i = 0; i < 3; i++) {
        cout << daystoComplete[i] << "\t";
    }

    cout << endl;
    cout << "   ";
    cout << "Degree Program: ";

    switch (degreeProgram) {
    case SECURITY:
        cout << "SECURITY";
        break;
    case NETWORK:
        cout << "NETWORK";
        break;
    case SOFTWARE:
        cout << "SOFTWARE";
        break;
    }
    cout << endl;
    return;
}