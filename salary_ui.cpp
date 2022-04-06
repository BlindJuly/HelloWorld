#include <iostream>
using namespace std;

int main() {
   int numHours;
   double payPerHour;

   cout << "Please enter the amount of hours worked: " << endl;
   cin >> numHours;

   cout << "Please enter your hourly rate: " << endl;
   cin >> payPerHour;

   cout << "Your total salary is " << numHours*payPerHour << endl;


       

   return 0;
}