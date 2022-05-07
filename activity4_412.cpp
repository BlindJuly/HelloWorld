#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int passengers;
    int totalPrice;

    cout << "How many passengers: " << endl;
    cin >> passengers;

    int passArray[passengers];


    for (int i = 0; i < passengers; i++){
        cout << "Please enter how much they paid: " << endl;
        cin >> passArray[i];
    }

    for (int i = 0; i < passengers; i++){
        totalPrice += passArray[i];
    }
    cout << totalPrice;
    
}