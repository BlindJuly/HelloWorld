#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

/*
Take undefined amount of inputs from user.  Total the scores when the user is done and output the total score.
1. 
*/

int main(){
    int score;
    int total_score = 0;

    

    while (score != -999){
        cout << "Please enter the score: " << endl;
        cin >> score;
        total_score += score;
    }
    total_score = total_score + 999;
    cout << "Your team scored a total of " << total_score << " points!" << endl;
}