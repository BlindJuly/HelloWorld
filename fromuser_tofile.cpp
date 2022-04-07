#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    ofstream outputFile;

    outputFile.open("sales.txt");

    if (!outputFile){
        cout << "Your file didn't open!" << endl;
        return 0;
    }

    cout << "Your file has been opened" << endl;

    

    for (int i = 0; i <= 12; i++){


    }
}