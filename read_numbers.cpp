#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    ifstream inputFile;
    int number;
    inputFile.open("numbers2.txt");

    if (!inputFile){
        cout << "Could not open the file!" << endl;
        return 0;
    }
    cout << "The file has been opened!" << endl;


    while (inputFile >> number){
        cout << number << endl;

    }

    inputFile.close();

}