#include <iostream>   
#include <iomanip>    //for manipulators
using namespace std;   

//We are going to make an asci box and asci triangle.  Constant variables were made for each asci character used.  Instead of typing
//it out and using a cout for each line, I decided to have more fun and use for loops for parts that had repetition.  

int main(){
    const char box_asc = '@';    //might as well set it as a constant
    const char tri_asc = '%';    //same

    for (int i = 12; i > 0; i--){  //more interesting if I use for loops, this is for the top of the box
        cout << box_asc;
    }
    cout << endl;     //makes sure to go to next line in order to do the sides of the box

    for (int i = 10; i > 0; i--){                           // for loop for the sides of the box
        cout << setw(0) << '@' << setw(11) << "@" << endl;
    }

    for (int i = 12; i > 0; i--){                   // for the bottom of the box, same for loop as top of box
        cout << box_asc;
    }
    cout << endl;              //hey!  I didn't know I could do multiple endls in one cout! Cool
    
    for (int i = 0; i < 6; i++){               //this for loop (for the triangle) was more fun than the box.  
        if (i == 0){
            cout << setw(7) << tri_asc << endl;  //prints the tippy top of the triangle if i is 0.  
        }
        else{
            cout << setw(7-i) << tri_asc;        //otherwise the left side of the triangle slopes down at slope = -1
            cout << setw(1+i + (i-1)) << tri_asc << endl;  //had some trouble here. Because of how setw works, you have to incremement 
        }                                                  //the spaces more than +1 in your code even though the slop of the characters
                                                            //are to the right at slope = -1.  That's why the (i-1 is there).
    }

    for (int i = 13; i > 0; i--){    //using the top/bottom of the box for loops but for the bottom of the triangle.
        cout << tri_asc << endl;
    }

    return 0;
}