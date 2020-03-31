#include <iostream>
#include "Person.h"

using namespace std;

int main() {
    Person person;

    cout << person.toString() << endl;
    person.setName("Catherine");
    cout << person.getName() << endl;

    return 0;
}
