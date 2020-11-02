/*Linked lists p1 Faizan Karim */

#include <iostream>
#include <cstring>
#include <stdio.h>
#include <iomanip>
#include "node.h"
#include "student.h"

using namespace std;

int main()
{
  //variables
  char input[20];
  //create 1st student
  Student* stud = new Student;
  cout << "Input student's first name:" << endl;
  cin.get(stud -> getFirst(), 20);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Input student's last name:" << endl;
  cin.get(stud -> getLast(), 20);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Input student's ID:" << endl;
  cin >> *stud -> getId();
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Input student's GPA:" << endl;
  cin >> *stud -> getGpa();
  cin.clear();
  cin.ignore(10000, '\n');

  //create 2nd student
  cout << "----------------------------" << endl;
  Student* stud2 = new Student;
  cout << "Input student's first name:" << endl;
  cin.get(stud2 -> getFirst(), 20);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Input student's last name:" << endl;
  cin.get(stud2 -> getLast(), 20);
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Input student's ID:" << endl;
  cin >> *stud2 -> getId();
  cin.clear();
  cin.ignore(10000, '\n');
  cout << "Input student's GPA:" << endl;
  cin >> *stud2 -> getGpa();
  cin.clear();
  cin.ignore(10000, '\n');

  //print student 1
  cout << "----------------------------" << endl;
  cout << "Student #1: " << stud -> getFirst() << " " << stud -> getLast() << ", ";
  cout << "ID: " << *stud -> getId() << ", GPA: ";
  cout << fixed << setprecision(2) << *stud -> getGpa() << endl;
  //print student 2
  cout << "Student #2: " << stud2 -> getFirst() << " " << stud2 -> getLast() << ", ";
  cout << "ID: " << *stud2 -> getId() << ", GPA: ";
  cout << fixed << setprecision(2) << *stud2 -> getGpa() << endl << endl;

  //setup nodes
  Node* firstNode = new Node(stud);
  Node* secondNode = new Node(stud2);
  firstNode -> setStudent(stud);
  firstNode -> setNext(secondNode);
  secondNode -> setStudent(stud2);
  //print nodes
  cout << "----------------------------" << endl << "Nodes: " << endl;
  cout << firstNode -> getStudent() -> getFirst() << " " << firstNode -> getStudent() -> getLast() << endl;
  cout << firstNode -> getNext() -> getStudent() -> getFirst() << " " << firstNode -> getNext() -> getStudent() -> getLast() << endl;
  
  return 0;
}
