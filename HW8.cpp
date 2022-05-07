#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

#include <iostream>
using namespace std;

int main() {
   int wrongCount = 0;
   int wrongArray[20] = {0};
   const int SIZE = 20;
   char correctAnswers[SIZE] = { 'B','D','A','A','C',  'A','B','A','C','D', 'B','C','D','A','D', 'C','C','B','D','A' }; 
      //this is an array that stores correct answers.
      //the index of item gives the answer for(question number+1), as the index starts with 0.

   char studentAnswers[20]; //is to store the answers for a student.
   
   for(int i=0; i<SIZE; i++){
      cin >> studentAnswers[i];
      
   }

   for (int i = 0; i < SIZE; i++){
      if (studentAnswers[i] != correctAnswers[i]){
         wrongCount += 1;
         wrongArray[i] = i;
      } 
      
   }
   if (wrongCount < 6){
      cout << "student passed" << endl;
   }
   else{
      cout << "student failed" << endl;
   }
   cout << "#incorrect answers: " << wrongCount << endl;
   //cout << "#incorrectly answered questions: " << endl;
   int wrongArrSize = sizeof(wrongArray) / sizeof(int);
   for (int i = 0; i < wrongArrSize; i++){
       if (wrongArray[i] == 0){
           continue;
       }
       cout << wrongArray[i] << " ";
   }
   return 0;
}
