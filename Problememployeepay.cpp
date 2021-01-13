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
  float regularHourlyWage = 16.00;
  float overtimeHourlyWage = 24.00;
  float numHoursWorked;
  float numRegHours;
  float numOvertimeHours = 0;
  float grossPay;
  float socialSTaxWithhold;
  float federalITaxWithhold;
  float stateITaxWithhold;
  int medInsurWithhold = 10;
  float netPay;

  cout << "Input number of hours worked in a week." << endl;
  cin >> numHoursWorked;

  if (numHoursWorked <= 0) {
    cout << "Enter a positive number." << endl;
    return -1;
  }

  if (numHoursWorked > 40) {
    numRegHours = 40;
    numOvertimeHours = numHoursWorked - numRegHours;
  }
  else {
    numRegHours = numHoursWorked;
  }

  grossPay = regularHourlyWage * numRegHours + overtimeHourlyWage * numOvertimeHours;

  // withholding amounts
  socialSTaxWithhold = grossPay * 0.06;
  federalITaxWithhold = grossPay * 0.14;
  stateITaxWithhold = grossPay * 0.05;

  netPay = grossPay - socialSTaxWithhold - federalITaxWithhold - stateITaxWithhold - medInsurWithhold;

  cout << "Gross Pay: $" << grossPay << endl;
  cout << "Social Security Tax Withholding Amount: $" << socialSTaxWithhold << endl;
  cout << "Federal Security Tax Withholding Amount: $" << federalITaxWithhold << endl;
  cout << "State Security Tax Withholding Amount: $" << stateITaxWithhold << endl;
  cout << "Medical Insurance Withholding Amount: $" << medInsurWithhold << endl;
  cout << "Net Pay: $" << netPay << endl;
  return 0;
}
