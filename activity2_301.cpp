#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

/*
We want to use a do-while loop to ask the user to input 2 numbers and then output the sum of those two numbers.  (Quiz for 2nd graders).  Last, we will ask
the user if they would like enter another set of numbers.
1. Declare a variable for the "play again" variable.  Do this as boolean (1 or 0) wrt Yes and No.  
2. Declare variables for the numbers to add.
3. Under the do part, prompt the user for both numbers and output the sum.  Prompt to see if they want to "play again".
4.  The while loop will check the boolean input by the user when being asked if they want to try another set of numbers. 
5. Lastly we output a farewell.  
*/

int main(){
    bool ui;
    double num1;
    double num2;

    do{
        cout << "Please enter the first number " << endl;
        cin >> num1;
        cout << "Please enter the second number: " << endl;
        cin >> num2;

        cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << "!" << endl;

        cout << "Do you want to try again with new numbers? <1 for Yes, 0 for No> " << endl;
        cin >> ui;

    }while (ui);

    cout << "Thanks for using this calculator. Good Bye!" << endl;
}