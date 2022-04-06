#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double score_1, score_2, score_3, score_4, score_5;
    
    cout << "Enter 5 test grades: " << endl;
    cin >> score_1 >> score_2 >> score_3 >> score_4 >> score_5;

    double average = (score_1 + score_2 + score_3 + score_4 + score_5) / 5.0;

    cout << fixed << setprecision(1) << "Average: " << average << endl;
}