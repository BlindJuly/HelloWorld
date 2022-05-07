#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int array1[] = {2, 5, 6, 7, 1, 10, 111, 345};
    for (int n : array1){
        cout << 5*n << " ";
    }
    for (int n : array1){
        cin >> n;
    }
    for (int n : array1){
        cout << 5*n << " ";
    }
}