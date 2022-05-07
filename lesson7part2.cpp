#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

/*Enter input file name
Reading from file "numbers.txt"
Total values: 12
Invalid values: 5
Valid values: 7
Average of valid values: 77.7143
*/

int main(){
    
    double number;
    int validCount = 0;
    int invalidCount = 0;
    double total = 0.0000;
    double average;

    ifstream inputfile;
    string input_fileName;
    cout << "Enter input file name" << endl;
    cin >> input_fileName;
    inputfile.open(input_fileName);

    ofstream outputfile;
    outputfile.open("invalid-values.txt");

    if(!inputfile){
        cout << "File " << "\"" << input_fileName << "\"" << " could not be opened" << endl;
        return 0;
    }

    cout << "Reading from file " << "\"" << input_fileName << "\"" << endl;

    while (inputfile >> number){
        if (number >= 0 && number <= 105){
            validCount += 1;
            total += number;
        }
        else{
            invalidCount += 1;
            outputfile << fixed << setprecision(5) << number << endl;
        }
    }
    average = total / validCount;
    cout << "Total values: " << (validCount + invalidCount) << endl;
    cout << "Invalid values: " << invalidCount << endl;
    cout << "Valid values: " << validCount << endl;
    if (validCount != 0){
        cout << "Average of valid values: " << fixed << setprecision(4) << average << endl;
    }
    else{
         cout << "An average cannot be calculated" << endl;
    }

}