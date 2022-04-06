#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std; 


int ExpBySquare(int base, int exponent){
    if (exponent < 0){
        ExpBySquare(1/base, -exponent);
    }
    else if (exponent = 0){
        return 1;
    }
    else if (exponent % 2 == 0){
        return ExpBySquare(base*base, exponent/2);
    }
    else{
        return base*ExpBySquare(base*base, (exponent - 1)/ 2);
    }
    return 0;
}

int main() {
return 0;
}