#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

/*We are going to take in multiple student test scores and determine how may of them passed.  Then print out that number.
1.declare number of students, score, counter, and passed.
2.use a while loop to continuously ask for scores and have a if statement within the loop to incrememnt passed if the if statement is True.
3. print out the passed out of the loop
*/


int main(){
   int numb_of_students;
   float score;
   int counter = 1;
   int passed = 0;

   cout << "Please enter the number of student score: " << endl;
   cin >> numb_of_students;

   while (counter < numb_of_students + 1){
       cout << "Please enter grade number " << counter << endl;
       cin >> score;
       if (score >= 70){
           passed += 1;
           //cout << passed << endl;
       }
       counter ++;
   }
   cout << passed << " students passed the test!" << endl;

}