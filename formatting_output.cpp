#include <iostream>  //uses the iostream file (header file) for preprocessing in order to use cin/cout in our program.  Standard input/output streams library.
#include <iomanip>   //allows us to use setw()
using namespace std; // standard namespace.  


int main() {
   const double TAX_RATE = 0.0625;  //constant tax rate for Texas
   double coffeePrice = 1.20;  //coffee price
   double bagelPrice = 1.99;   //bagel price

   int bagelsPurch;         //amount of bagels purchased.  declared as integer type
   int coffeePurch;         //amount of coffee purchased.  declared as integer type

   cout << "How many bagels would you like? " << endl;  //prompt for number of bagels to be purchased
   cin >> bagelsPurch;   // input from customer/user for amount of bagels to purchase

   cout << "How many coffees would you like? " << endl;  //prompt for coffee purchased
   cin >> coffeePurch;  //input from customer/user for amount of coffee purchased

   double costBagel = bagelPrice*bagelsPurch;   // total bagel cost
   double costCoffee = coffeePrice*coffeePurch;  // total coffee cost
   double subTotal = costBagel + costCoffee;   // sum of totals before tax
   double taxTotal = subTotal*TAX_RATE;        // amount of tax
   double total = subTotal + taxTotal;         // total after tax added on
   
   cout << setprecision(2) << fixed;           // all decimal numbers will have a precision of 2 decimal places.  all decimal numbers will be in fixed point notation as opposed to scientific notation
   cout << setw(29) << "Welcome to THE Bagel Store!" << endl;  //Bill title
   cout << endl;  //blank line between bill title/greeting and column titles 
   cout << setw(9) << "Product" << setw(10) << "Price" << setw(10) << "Quantity" << setw(8) << "Cost" << endl;  //line containing column titles.  setw() used along with right default to space them correctly
   cout << setw(9) << "Coffee" << setw(10) << coffeePrice << setw(10) << coffeePurch << setw(8) << costCoffee << endl;  // line containing coffee information gathered above
   cout << setw(9) << "Bagel" << setw(10) << bagelPrice << setw(10) << bagelsPurch << setw(8) << costBagel << endl;  //line containing bagel information gathered above
   cout << setw(29) << "Sub Total" << setw(8) << subTotal << endl;  //subtotal
   cout << setw(29) << "Tax" << setw(8) << taxTotal << endl;  //tax total
   cout << setw(29) << "Total" << setw(8) << total << endl;  //final total
   cout << endl;  //blank line at bottom of bill


   //although it wouldn't be realistic to buy thousands of bagels/coffee, one issue with this program is that really large numbers get crowded on each row.  I think one obvious way to fix that would be to 
   //space out the "Cost" column, but it might look weird with small amounts.  A better option would be to redefine the widths used for "Quality" and "Cost" columns and I believe use left alignment on 
   //the "Cost" column so that the numbers expand right instead of left.  The example we are imitating though looks to be using right justified (default) so I'll leave it.  

   //one thing that was interesting is that if you put a non-integer into the user input prompt, the program just completes without taking any other inputs and prints out 0 for all user input related numbers.
   
   return 0;
}