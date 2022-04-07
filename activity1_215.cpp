#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double spent;
    double disc_15 = 0;
    double disc_10 = 0;
    double final_amount = 0;
    double discount_amount = 0;

cout << "Please enter how much you spent" << endl;
cin >> spent;
disc_15 = 0.15*spent;
disc_10 = 0.10*spent;


    if (spent >= 200){
        discount_amount =  disc_15;
        final_amount = spent - disc_15;
     }
     else if (spent >= 100){
         discount_amount = disc_10;
         final_amount = spent - disc_10;
     }
    else{
        cout << "No discount for you!" << endl;
        discount_amount = 0;
        final_amount = spent;
    }

    cout << "Discount Amount: " << discount_amount << endl;
    cout << "Final Amount: " << final_amount << endl;

}