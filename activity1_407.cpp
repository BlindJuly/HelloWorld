#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int i = 4;
    int myValues[10]; 
    int x = myValues[8];
    myValues[9] = 555;
    int currIndex;
    myValues[currIndex] = 777;
    int tempValue;
    myValues[i] = 5;
    myValues[i+1] = 6;
    tempValue = myValues[i++]; 
    cout << tempValue << endl;
}