#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student 
{
 //student info
 public:
  Student();
  //huh
  ~Student();
  //getters
  char* getFirst();
  char* getLast();
  int* getId();
  float* getGpa();
 private:
  char firstN[20];
  char lastN[20];
  int id;
  float gpa;
};
#endif
