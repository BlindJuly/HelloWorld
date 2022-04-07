#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int total;
    int counter = 1;
    int digit;
    float average;
    float number_amount;

    cout << "How many digits do you have to input? " << endl;
    cin >> number_amount; 

    while (counter < number_amount + 1){
        cout << "Enter digit number " << counter << "." << endl;
        cin >> digit;
        total += digit;
        counter++;
    }
    cout << "The total is " << total << endl;
    average = total/number_amount;
    cout << "The average is " << average << endl; 
}

