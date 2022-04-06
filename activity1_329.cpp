#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <cctype>
using namespace std;

int main(){
    string userString;
    int count = 0;

    cout << "Please enter a string" << endl;
    getline(cin, userString);

    for (char i = 0; i < userString.length() - 1; i++){
        char a = tolower(userString.at(i));
        if (a == 'a' || a == 'e'|| a == 'i' || a == 'o'|| a == 'i'){
            count += 1;
        }
    }
    cout << count << endl;

}