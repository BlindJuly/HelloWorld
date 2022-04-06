#include <iostream>
#include <string>
using namespace std;

int main(){
    double risingLevel;

    cout << "Enter the estimated ocean level" << endl;
    cin >> risingLevel;
    cout << "Level: " << risingLevel << endl;

    cout << "Years: 5," << " Rise: " << risingLevel*5 << endl;
    cout << "Years: 10," << " Rise: " << risingLevel*10 << endl;
    cout << "Years: 50," << " Rise: " << risingLevel*50 << endl;


    return 0;   //return 0 because class declared with int

}