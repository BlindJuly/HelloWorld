#include <iostream>
#include <cmath>
using namespace std;
int employed;
int recentGrad;

int main() {

    cout << "Please enter 1 if employed, otherwise enter 0: " << endl;
    cin >> employed; 


    if (employed == 1){
        cout << "Are you a recent grade (1/0) :";
        cin >> recentGrad;

        if (recentGrad == 1){
            cout << "You qualify for the special ";
            cout << "interest rate.\n";
        }

        else{
            cout << "You must have graduated from ";
            cout << "college in the past two\n";
            cout << "years to qualify.\n";
        }
    }
        
    else
    {
        cout << "You must be employed ";
    }

}