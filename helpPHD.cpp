#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int iterations;
    string input;
    cin >> iterations;

    for (int i = 0; i < iterations; i++){
        cin >> input;
        if (input[0] == 'P'){
            cout << "skipped" << endl;
        }
        else{
            int plusPos = input.find('+');
            int firstNum = stoi(input.substr(0, plusPos));
            int length = input.length();
            int lenSecondNum = length - 1 - plusPos;
            int secondNum = stoi(input.substr(plusPos+1, lenSecondNum));
            int sum = firstNum + secondNum;
            cout << sum << endl;
        }
    }
}