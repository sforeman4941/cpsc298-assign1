/*
Scott Foreman
2324296
sforeman@chapman.edu
CPSC 298-01
Assignment 1
*/

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  int maxCapacity;
  int numPeopleAttending;

  // max capacity input
  cout << "Enter the maximum capacity of the meeting room." << endl;
  cin >> maxCapacity;
  if (maxCapacity <= 0) {
    cout << "Enter a positive number." << endl;
    return -1;
  }

  // number people attending
  cout << "Enter the number of people attending the meeting." << endl;
  cin >> numPeopleAttending;
  if (numPeopleAttending <= 0) {
    cout << "Enter a positive number." << endl;
    return -1;
  }

  // num people less than or equal to max capacity
  if (numPeopleAttending <= maxCapacity) {
    cout << "The meeting can convene." << endl;
    int numOfSpotsLeft = maxCapacity - numPeopleAttending;
    cout << numOfSpotsLeft << " more people can attend." << endl;
  }
  else {
    cout << "The meeting cannot convene due to fire regulations." << endl;
    int numOfPeopleToRemove = numPeopleAttending - maxCapacity;
    cout << numOfPeopleToRemove << " people must be removed to allow meeting to convene." << endl;
  }

  return 0;
}
