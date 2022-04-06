#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int temperature;

    cout << "Please enter the temperature: " << endl;
    cin >> temperature;

    if(temperature > 150){
        cout << "RIP" << endl;
    }
    else if (temperature <= 40){
        cout << "Grab a coat, winter hat, and gloves!" << endl;
    }
    else if(temperature <= 65){
        cout << "Grab a light jacket" << endl;
    }
    else if(temperature <= 75){
        cout << "Wear a long sleeve outfit" << endl;
    }
    else{
        cout << "Wear sunscreen and summer hat" << endl;
    }    

}