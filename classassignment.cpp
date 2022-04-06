#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int score;
    int total_score;

    

    while (score != -999){
        cout << "Please enter the score: " << endl;
        cin >> score;
        total_score += score;
    }
    cout << "Your team scored a total of " << total_score << " points!" << endl;
    
}