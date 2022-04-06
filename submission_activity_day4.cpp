#include <iostream>
#include <cmath>   //don't need by why not
using namespace std;


int main() {
    int userNumber;   //the input number will be an integer

    cout << "Please enter your number: " << endl;  //prompt user for number
    cin >> userNumber;  //number input

    if (userNumber % 2 == 0){   //to determine if even, use modulus to determine if there is a remainder after diving by 2.  If True, then carry
                            //out the cout telling the user their number is even.  
        cout << "Your number is even!" << endl;
    }
    else{                                        //otherwise if the if statement is False, this else statement will catch and tell the
        cout << "Your number is odd!" << endl;   //the user their number is odd as that is the only other option  
    }
   return 0;
}