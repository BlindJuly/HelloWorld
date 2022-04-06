#include <iostream>
#include <string>
using namespace std;

//Create variables for the purchase price, state sales tax rate, county sales tax rate, and the total 
//sales tax.   Tax percentage is linear, therefore we will add the two taxes together and multiply it by the 
//predetermined price of 95.  This will give us the total tax that would be added on to the base 95 
//dollar purchase.

int main(){                              //initialize class main with in
    const int price = 95;               //price given to us.  Declared it as a constant.
    const double state_Tax = 0.06;      //state tax figure given to us.  Declared as constant.
    const double county_Tax = 0.02;     //county tax figure given to us.  Declared as constant.
    double total_sTax = price*(state_Tax + county_Tax);   //the calculation for total sales tax

    cout << total_sTax << endl;  //Outputting the total sales tax

    return 0;   //return 0 because class declared with int

}