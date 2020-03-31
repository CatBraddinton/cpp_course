#include <iostream>

using namespace std;

class Alphabet {
private:
  string name;
public:
  Alphabet() {}
  void setName(string name) {
    this->name = name;
  }
  void printName() const {
    cout << name << flush;
  }
};

int main() {
  Alphabet *pAlphabet = new Alphabet[26];
  char c = 'A';

  for (int i = 0; i < 26; i++) {
    string name(1, c);
    pAlphabet[i].setName(name);
    pAlphabet[i].printName();
    c++;
  }
  delete [] pAlphabet;
  return 0;
}
