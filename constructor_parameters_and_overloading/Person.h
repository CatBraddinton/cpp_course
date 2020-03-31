#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <sstream>

using namespace std;

class Person {
private:
  string name;
  int age;
public:
  Person(): name("def"), age(0) {};
  Person(string name, int  age): name(name), age(age) {};
  string toString();
};

#endif
