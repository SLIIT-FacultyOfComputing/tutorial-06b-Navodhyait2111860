#include "Student.h"
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int tStudentId, char tName[]) 
{
  studentId = tStudentId;
  strcpy (name, tName);
}

// Display StudentId and Name
void Student::display() 
{
  cout << "\nStudentId\t: " << studentId << endl;
  cout << "\nName\t: " << name << endl;
  
}
