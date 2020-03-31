#include "Person.h"

int main() {
  Person person1;
  Person person2("Catherine", 22);
  Person person3("Cat", 18);

  cout << person1.toString() << endl;
  cout << person2.toString() << endl;
  cout << person3.toString() << endl;
  return 0;
}
