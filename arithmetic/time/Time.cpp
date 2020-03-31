#include "Time.h"

Time::Time(int seconds) {
  this->seconds = seconds % 60;
  this->hours = seconds / 3600;
  seconds = seconds - (this->hours * 3600);
  this->minutes = seconds / 60;
}

string Time::toString() {
  stringstream ss;

  ss << hours;
  ss << " : ";
  ss << minutes;
  ss << " : ";
  ss << seconds;

  return ss.str();
}
