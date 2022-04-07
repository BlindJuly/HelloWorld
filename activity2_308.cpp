#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){
    int sideA;
    int sideB;
    int sideC;

    cout << "Please enter side a, side b, and side c (a b c): " << endl;
    cin >> sideA >> sideB >> sideC;
    int largest = max(max(sideA, sideB), sideC);

    int sum = sideA + sideB + sideC;
    if (largest > sum - largest){
        cout << "Your triangle is possible" << endl;
    }
    else{
        cout << "Your triangle is not possible" << endl;
    }

    






}