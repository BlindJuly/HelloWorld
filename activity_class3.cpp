#include <iostream>
using namespace std;

int main() {
   const float PI = 3.14;
   double radius;
   cout << "What is the radius? " << endl;
   cin >> radius;
   double area ;
   area = PI*radius*radius;
   double perimeter;
   perimeter = 2*PI*radius;
   cout << "Area:" << area << endl << "Perimeter: " << perimeter << endl;
   

   return 0;
}