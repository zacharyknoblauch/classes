/*
 *
 *  Program: lab13a.cc
 *  Name: Zachary Knoblauch
 *  Date: 16/April/2019
 *  Description: Program reads value from keyboard
 *               If the number is less than ten (10), increment by one (1)
 *               If the number is greater than ten (10), do nothing
 *               Print out the beginning and end values
 *
 */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cctype>
#include <vector>

using namespace std;

class Counter{
public:
  //constructor
  Counter();//default to zero (0)
  Counter(int newVal);//initialize to value
  //getter function
  int getValue();//reurns value
  //setter function
  void increment();//increments value
private:
  int value;
};

int main(int argc, char const *argv[]) {

  int value;
  cout << "Enter a value: ";
  cin >> value;
  cout << endl;
  Counter c(value);
  if (c.getValue() < 10) {
    c.increment();
  }
  cout << "Original value: " << value << endl;
  cout << "Incremented value " << c.getValue() << endl;
  return 0;
}

Counter::Counter(){//default to zero (0)
  value = 0;
}

Counter::Counter(int newVal){//initialize to value
  value = newVal;
}

int Counter::getValue(){//returns value
  return value;
}

void Counter::increment(){//increments value
  value++;
}
