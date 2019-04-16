/*
 *
 *  Program: lab13b.cc
 *  Name: Zachary Knoblauch
 *  Date: 16/April/2019
 *  Description: Program displays a menu
 *               User inputs either 'p,' 'n,' or 'q'
 *               If p, increment cars and increase money by 0.50
 *               If n, increment cars
 *               If q, quit and display cars and money
 */

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cctype>
#include <vector>

using namespace std;

class Tollbooth{
public:
  //constructor
  Tollbooth();//default to zero (0)
  //setter function
  void payinCar();//increment cars and increase money by 0.50
  void nopayCar();//increment cars
  //helper function
  void display(ostream &write);//display cars and money
private:
  int cars;
  double money;
};

int main(int argc, char const *argv[]) {
  cout.precision(2);//two (2) decimal places
  char input;
  Tollbooth toll;
  cout << "P - Paid  N - Not paid - Q - Quit -> ";//menu
  cin >> input;
  while (input != 'q' && input != 'Q') {
    if (input == 'p' || input == 'P') {//if car paid
      toll.payinCar();
    }
    if (input == 'n' || input == 'N') {//if car didn't pay
      toll.nopayCar();
    }
    cout << "P - Paid  N - Not paid - Q - Quit -> ";//update
    cin >> input;
  }
  cout << endl;
  toll.display(cout);
  return 0;
}

Tollbooth::Tollbooth(){//default to zero (0)
  cars = 0;
  money = 0.0;
}

void Tollbooth::payinCar(){//increment cars and increase money by 0.50
  cars++;
  money += 0.5;
}

void Tollbooth::nopayCar(){//increment cars
  cars++;
}

void Tollbooth::display(ostream &write){//display cars and money
  write << "Total number of cars: " << cars << endl;
  write << "Total amount collected: $" << fixed << money << endl;
}
