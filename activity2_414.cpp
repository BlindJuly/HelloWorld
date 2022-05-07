#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int plu[] = {4001, 4016, 3043};
string name[] = {"banana" , "apple", "grapes"};
double price[] = {0.69, 1.29, 2.50};
double purchasedWeight[3];

const int SIZE = sizeof(plu) / sizeof(int);

int getIndex(int plu_number){
    for (int i = 0; i < SIZE; i++){ 
        if (plu[i] == plu_number){
            return i;
        }
    }
    return -1;
}

int main(){
    int userInput;
    cout << "Please enter the PLU number (-1 to end): ";
    cin >> userInput;

    while (userInput != -1){
        int uiIndex = getIndex(userInput);
        if(uiIndex != -1){
            cout << "Enter the weight of " << name[uiIndex] << " : " << endl;
            cin >> purchasedWeight[uiIndex];
        }
        else{
            cout << userInput << " is not a valid PLU code" << endl;
        }
        cout << "Enter PLU code (-1 to end): ";
        cin >> userInput;
    }
    double runningTotal = 0;
    for(int i = 0; i < SIZE; i++){
        if(purchasedWeight[i] != 0){
            int productValue = (purchasedWeight[i]*price[i]);
            runningTotal += productValue;
            cout << "Cost of " << name[i] << " : " << productValue << endl;
        }
    }
    cout << "Total: " << runningTotal;
}