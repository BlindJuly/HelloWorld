#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <cctype>
using namespace std;

/*Password Strength Checker –good password should have the following 
characteristics:
a.Have at least 6 characters.
b.At least one character should be in uppercase.
c.At least one character should be in lowercase.
d.At least one character should be a digit.
 */

int main(){
    string userPass;
    bool charUpper;
    bool charLower;
    bool charDigit;

    cout << "A good password should have the following characteristics:" << endl;
    cout << "a. Have at least 6 characters." << endl;
    cout << "b. At least one character should be in uppercase." << endl;        
    cout << "c. At least one character should be in lowercase." << endl;        
    cout << "d. At least one character should be a digit." << endl;     
            
    while(true){
        cout << "Please choose a password: " << endl;
        getline(cin, userPass);
        if(userPass.length() >= 6){
            break;
        }
    }

    for (int i = 0; i <= userPass.length()-1; i++){
        char a = userPass[i];
        if(isupper(a)){
            charUpper = true;
        }
        else if(islower(a)){
            charLower = true;
        }
        else if(isdigit(a)){
            charDigit = true;
        }        
    }
    if (charUpper && charLower && charDigit){
        cout << "Password Strength: FANTASTIC!" << endl;
    }
    else{
        cout << "Password Strength: Garbage!" << endl;
    }

}