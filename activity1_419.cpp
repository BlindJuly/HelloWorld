#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


void addValues(int argArraySource[], int argArrayTarget[], int argArrSize, int argIncValue){
    for (int i = 0; i < argArrSize; i++){
        argArrayTarget[i] = argArraySource[i] + argIncValue;
}

void printValues(int argArraySource[], int argArraySize){
    for (int i = 0; i < argArraySize; i++){
        cout << argArraySource[i] << endl;
    }
}

int main(){
    int array1[] = {1, 3, 2, 5, 8, 4, 20, 17, 25, 80};
    int results[10];
    int array1Size = sizeof(array1) / sizeof(int);
    int results[array1Size];

    addValues(array1, results, array1Size);
    printValues(results, array1Size)
    
}