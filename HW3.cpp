#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std; 

/*Our objective here is to calculate the user's pay based on the restrictions set by the company and their base pay.  The base pay is $20/hr, the base hours/week is 40, and 10 hours of overtime is
allowed.  For overtime you are paid your basePay*1.5 and everything over the allowed overtime is just basePay*10. So what we'll do is:
1. Create variables that matter for the calculation.  Make sure they have the correct data type.  
2. Ask the user for the number of hours they worked and store it in hrsWorked.
3. Output baseHours which is a constant 40 hours in this case.  Calculate and output regular pay per week.  basePay*baseHours
4. Calculator and output overtime hours that are paid for by checking for 50 or more hours worked therewfore 10 paid overtime hours.
5.  Calculate the overtime pay (paid overtime hours)*1.5*20
6. Calculate the weekly pay.
)
*/

int main() {
    const int basePay = 20;     // 20 dollars per hour base pay
    const int otRate = 20*1.5;  //30 dollars per hour of OT
    const int baseHrs = 40;    //this is the base amount of regular hours before OT kicks in
    int otCap;  //only get 30 dollars per hour up to 10 hours overtime per week.
    int totalHrs;           //total hours worked
     
    cout << "Please input the total hours you have worked this week: " << endl;   //asking user to input total hours
    cin >> totalHrs;  
    
    cout << "Enter the Overtime Cap: " << endl;
    cin >> otCap;                                                              //program takes input

    if (totalHrs <= 40){                                                      //if statement checks if total hours are 40 or below
        cout << "Regular hours: " << totalHrs << endl;                        //if 40 or below, totalHrs is "Regular hours"
        cout << "Regular pay: " << totalHrs*basePay << endl;                  //how much money the user gets for working the base 40 hours
        cout << "Overtime hours: 0" << endl;                                  //in this case there would be no OT by default
        cout << "Overtime pay: 0" << endl;                                    //therefore no OT pay
        cout << "Your weekly pay: " << basePay*totalHrs << endl;              //weekly pay is the same as regular pay
    }
    else{
        int gOT = totalHrs - baseHrs;                                               //so this problem was probably designed in order for the student to get used to
        int rOT = gOT%otCap;  //used for total $30 OT pay/hrs formula               //using if, if else, and else, however I wanted to see if I could come up with a single formula
        int tOT = gOT/otCap;  //use for total $30 OT pay/hrs formula                //that calculated the amount of PAID OT hours (30 dollars per hour) regardless of it was 
        int paidOT = gOT + rOT*((rOT/gOT) - 1) - otCap*((rOT/gOT) + (tOT - 1));     // <10 otHrs, =10 otHrs, or >10 otHrs.  If under, it will spit out the amount of hours over 40.  If >= 10,
        cout << "Regular hours: " << baseHrs << endl;                               //it will spit out 10 hours.  This makes up for some additional if, if else, else statements I would have
        cout << "Regular pay: " << baseHrs*basePay << endl;                         //to make otherwise.  Idk if there is any advantage, but I wanted to make it a challenge so I did it. 
        cout << "Overtime hours: " <<  paidOT << endl;
        cout << "Overtime pay: " << paidOT*otRate << endl;
        cout << "Your weekly pay: " << basePay*baseHrs + paidOT*otRate << endl; //+ (gOT - paidOT)*basePay << endl;  // regular 40 hours pay + OTpay that counts + OTpay that is paid the same as regular
                                                                                //for some reason the zybooks problem doesn't want to pay the residual OT.
    }
    return 0;
}