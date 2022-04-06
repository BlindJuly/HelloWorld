#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
# include <fstream>
using namespace std; 


int main(){
        ifstream infile;    //create the file stream object
        string uiFileName;

        cin >> uiFileName;   //get file name from user

        infile.open(uiFileName);
        if (!infile){
             cout << "File open failure!";
             return 1;  	}
        else{
             cout << "Opened the file" << endl;
             cout << endl; 	
        }
        string product; 
        double price;
        double amount;
        double totalPrice = 0;
        double product_price;

        while (infile >> product >> price){
        cout << "Product: " << product << endl;
        cout << "Price/lb: " << price << endl;
        cout << "Please enter the amount of " << product << " you would like in pounds: " << endl << endl;;
        cin >> amount;
        product_price = price*amount;
        totalPrice += product_price;
        cout << "You have selected " << "$" << product_price << " worth of " << product << "." << endl << endl;
        cout << "Your total price so far is " << "$" << totalPrice << "." << endl << endl; 

        }
        cout << "Your final due is " << "$" << totalPrice << endl;
        infile.close(); 
return 0;
}//end of main