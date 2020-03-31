#include "Person.h"

string Person::toString() {
  stringstream ss;

  ss << "Name: ";
  ss << name;
  ss << ", Age: ";
  ss << age;

  return ss.str();
}
