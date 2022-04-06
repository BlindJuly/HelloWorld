#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

/*
We want to convert our US dollar amount into Pesos, Yen, and Euros.  
1. We are given the exchange rates, which we declared as double constants.  
2. declare dollars (the input amount) as double since money typically uses 2 decimal places.
3. We prompt the user using cout and take in their input using cin
4. we output the titles of each currency on one line, spaced out evenly at 15 spaces using setw() function.
5. On the very next line we output the calculated the currency amounts equivalent to the user's dollar amount.  We fix the decimal places to 2 and use setw() once more
in order line the numbers up with the colum titles from the line before.  
*/


int main(){
    const double convPesos = 19.73;  //per US dollar
    const double convEuros = 0.84;   //per US dollar
    const double convYen = 113.27;   //per US dollar
    double dollars;

    cout << "Enter the amount in dollars" << endl;   //prompt
    cin >> dollars;                                 //input number in dollars

    cout << setw(15) << "Dollars" << setw(15) << "Yen" << setw(15) << "Euros" << setw(15) << "Pesos" << endl;   //column titles spaced 15 spaces apart
    cout << fixed << setprecision(2) << setw(15) << dollars << setw(15) << dollars*convYen << setw(15) << dollars*convEuros << setw(15) << dollars*convPesos << endl; 
    //calculated dollar equivalences in each of the currences and ligned them up so that they accurately are displayed under the right currency column title. 
}