#include <iostream>
using namespace std;

int main() {
   int grade1;
   int grade2;
   int grade3;

   cout << "Please enter the first grade: " << endl;
   cin >> grade1;
   cout << "Please enter the Second grade: " << endl;
   cin >> grade2;
   cout << "Please enter the Third grade: " << endl;
   cin >> grade3;

   double average = (grade1 + grade2 + grade3)/3;

   cout << "Your average is: " << average << endl;

   if (average >= 95){
       cout << "Congrats!  You're average is 95 or above!" << endl;
   }

   return 0;
}