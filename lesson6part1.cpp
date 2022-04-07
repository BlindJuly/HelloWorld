#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

/* For this assignment, we will take in a lower bound number and a higher bound number, check to make sure they are
not outside the integer domain [32, 126], and then print out the ascii characters they represent in rows 20 characters long.
1.Prompt for input and take in two unsigned integers in a loop.
2.Check lower < higher && lower >= 32 && higher <=126 in same loop.
3.If FALSE then cout << "Values must be in range 32 and 126" 
4.if FALSE, also re-prompt "Enter lower and upper values"
5. if TRUE, display the numbers in the user chosen domain inside the required formatting.
6. Required formatting includes ----+----+----+----+ (on top and bottom) and no more than 20
characters per line.
*/
int main(){
    unsigned int lowNum, highNum;  //declare the low and high user input variables 
    const int DomainMin = 32;       //the minimum of the domain of allowed numbers
    const int DomainMax = 126;      //the maximum of the domain of allowed numbers


    while(true){                                                                //while "there is no break" keep looping
        cout << "Enter lower and upper values" << endl;                        //user prompt for the numbers
        cin >> lowNum >> highNum;                                               //take in the user's input
        if (lowNum > highNum || lowNum < DomainMin || highNum > DomainMax){
            cout << "Values must be in range 32 to 126 inclusive" << endl;      //OR conditionals to check if any of those unwanted conditions are True
            continue;                                                            //if they are, then continue the loop
        }
        else{                                                                    //otherwise if none are met, then that means the user inputted valid numbers
            break;                                                               //breaks the while loop
        }
    }
    cout << "Characters for ASCII values between " << lowNum << " and " << highNum << endl;
    cout << "----+----+----+----+" << endl;                                      //the top border
    for (int i = lowNum; i <= highNum; i++){                                      //iterate through the valid range of numbers the user inputted
        if (i > lowNum+19){                                                       //this checks to see if we have printed 20 characters on a line or not by checking lowNum + 19.  
            lowNum = i;                                                           // if it is true, then we reset the "counter" by setting the conditional to the new i
            cout << endl;                                                           // then printed out an "endl" so it starts printing on a new line.  
        }                                                                           // one thing that is a bit iffy here, is reassigning the user input variable and using it as the counter.
        char asciiChar = i;                                                     //if we aren't at 20 characters, print away!  Make sure the integers are printed as chars
        cout << asciiChar;                                                      //these chars refer to the corresponding characters in the ASCII table. 
    }
    cout << endl << "----+----+----+----+" << endl;                                         //bottom border

}