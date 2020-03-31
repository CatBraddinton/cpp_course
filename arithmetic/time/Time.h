#include <iostream>
#include <sstream>

using namespace std;

class Time {
private:
  int seconds;
  int minutes;
  int hours;

public:
  Time(): seconds(0), minutes(0), hours(0) {};
  Time(int seconds);
  string toString();
};
