#include<iostream>
using namespace std;

bool has_distinct_digits(int year) { 
  int d4 = year % 10;
  year /= 10;
  int d3 = year % 10;
  year /= 10;
  int d2 = year % 10;
  year /= 10;
  int d1 = year % 10;

  if (d1 != d2 and d1 != d3 and d1 != d4
    and d2 != d3 and d2 != d4
     and d3 != d4) { 
    return true;
  }
  return false;
}

int main() {
  int year; cin >> year;
  while (year++) {
    if (has_distinct_digits(year)) {
      cout << year << '\n';
      return 0;
    }
  }
  return 0;
}