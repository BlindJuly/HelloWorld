#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    string input;
    cin >> input;
    int length = input.length();

    for (int i = 0; i < length; i++){
        char eyesCheck = input[i];
        char nose_mouthCheck = input[i+1];
        if (eyesCheck == ':' || eyesCheck == ';'){
            if (nose_mouthCheck == ')'){
                cout << i << endl;

            }
        }   
            else if (nose_mouthCheck == '-'){
                if (input[i+2] == ')'){
                    cout << i << endl;
            }
        }
    }
}