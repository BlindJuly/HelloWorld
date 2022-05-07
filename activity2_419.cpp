#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

void computePrice(int argArrSource[], double argArrPrice[], double argArrTarget[], int argArrSize){
    int total = 0;
    for (int i = 0; i < argArrSize; i++){
        int age = argArrSource[i];
        if (age < 6){
            total += argArrPrice[0];
        }
        else if (age < 11){
            total += argArrPrice[1];
        }
    }
}




int main(){
    int ages[] = {36, 5, 3, 45, 10, 12, 70, 50, 20, 18};

}