#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double spendLimit = 50;
    double total;
    double totalP;
    double priceList[] = {9.99, 2.99, 12.50, 15.30, 24.50, 39.99, 5.99, 3.99, 4.50, 7.99};
    double product;
    int numElements = sizeof(priceList)/ sizeof(double);
    total = spendLimit;

    for (int i = 0; i < numElements; i++){
        total -= priceList[i];
        if (total >= 0){
            product = priceList[i];
            cout << product << " , ";
            totalP += product;
        }
        else{
            total += priceList[i];
            if (i == numElements - 1){
                cout << "Total: " << totalP << endl;
                break;
            }
        }
    }
   
}