#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

/*
Declare variables (datatype: int) for score1, score2, and score3.  Golf scores are always integers (both + and -).
take input into the three score variables 
calculate the average of the scores.  SUM(scores)/N where N = number of scores

*/

int main(){
    int score1, score2, score3;  //declare your scores as int because golf

    cout << "Please enter scores with space inbetween: " << endl;   //taking scores in on one line prompt
    cin >> score1 >> score2 >> score3;     //take them on one line

    double avg = (score1 + score2 + score3)/ 3.0;  //find the average

    cout << "The average is: "<< avg << endl;   // output the average with floats


}