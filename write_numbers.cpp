#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    ofstream outputFile;

    outputFile.open("numbers2.txt");

    for(int i = 1; i <= 100; i++){
        outputFile << i << endl;
    }

    outputFile.close();

    
    
}