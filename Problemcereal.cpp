/*
Scott Foreman
2324296
sforeman@chapman.edu
CPSC 298-01
Assignment 1
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **arg) {

  float ouncesInTon = 35273.92;
  float packageWghtOunces;
  float packageWghtTons;
  float numBoxesForTon;
  int numberBoxesForTon;

  cout << "Input the weight of a cereal package in ounces." << endl;
  cin >> packageWghtOunces;
  cout << packageWghtOunces;
  //ensuring positive weight
  if (packageWghtOunces <= 0) {
    cout << "Enter a weight that is a positive number." << endl;
    return -1;
  }

  packageWghtTons = packageWghtOunces / ouncesInTon;
  numBoxesForTon = ouncesInTon / packageWghtOunces;

  // case when number of boxes is an integer
  if (numBoxesForTon == floor(numBoxesForTon)) {
    numberBoxesForTon = numBoxesForTon;
  }
  // rounding up when it isn't an integer
  else {
    numberBoxesForTon = numBoxesForTon + 1;
  }

  cout << "The package weight in tons: " << packageWghtTons << endl;
  cout << "Required packages for one ton: " << numberBoxesForTon << endl;
  return 0;
}
