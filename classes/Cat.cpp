#include <iostream>

#include "Cat.h"

using namespace std;

Cat::Cat() {
  cout << "Cat created!!!" << endl;
  happy = true;
}
Cat::~Cat() {
  cout << "Cat destroed!!!" << endl;
}
void Cat::speak() {
  if (happy)
    cout << "Meouwwwww!!!" << endl;
  else
    cout << "SSsssss" << endl;
}
