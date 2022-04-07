#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    ifstream inputFile;

    inputFile.open("sample.txt");

    if(!inputFile){
        cout << "The file did not open correctly" << endl;
        return 0;
    }
    cout << "The file opened correctly" << endl;

    double total = 0;
    int number;
    int counter = 0;

    while (inputFile >> number){
        cout << number << endl;
        cout << total << endl;
        total += number;
        counter += 1;
    }

    double average = total / counter;

    cout << "Average: " << average << endl;

    inputFile.close();

}