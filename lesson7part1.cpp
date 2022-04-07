#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

/** prompt for the input file name with the prompt "Enter input file name"
read in the file name
open the input file for this file name
display a message if the input file does not open and quit your program 
open the output file ("saleschart.txt")
display a message if the output file does not open, close the input file,  and quit your program
while (readFile into store number and sales for store
    if store number or sales are invalid
         display an appropriate error message (see below)
   else
         output bar chart for this store to the output file
   end if
end while
close the input and output files
**/

int main(){
    ifstream infile1;
    string fileName;
    cout << "Enter input file name" << endl;
    cin >> fileName;

    infile1.open(fileName);

    if (!infile1){
        cout << "File " << "\"" << fileName << "\"" << " could not be opened" << endl;
        return 0;
    }
    else{
        ofstream outFile;
        outFile.open("saleschart.txt");
        if(!outFile){
            cout << "File saleschart.txt could not be opened" << endl;
            infile1.close();
            return 0;
        }
        else{
            unsigned int storeNumber = 0;
            long long int salesValue = 0;

            outFile << "SALES BAR CHART" << endl;
            outFile << "(Each * equals 5,000 dollars)" << endl;

            while (infile1 >> storeNumber >> salesValue){
                if (storeNumber > 0 && storeNumber < 100 && salesValue >= 0){
                   outFile << "Store " << setw(2) << storeNumber <<": " << string(salesValue/5000, '*') << endl;
                }
                else if (storeNumber == 0 || storeNumber > 99){
                    cout << "The store number " << storeNumber << " is not valid" << endl; 
                }
                else if (salesValue < 0){
                    cout << "The sales value for store " << storeNumber << " is negative" << endl;
                }
            }
            infile1.close();
            outFile.close();
        } 
    }

}