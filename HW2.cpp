#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//pseudocode
//Overall we want to show the user the total amount of electricity usage they have (in kWh) for a 30 day period.  We also want to show
//what percentage of power is distrubted between lightbulbs, AC unit, and fans (percentages).  Lastly, we will calculate their bill based
//on the per-unit price of electricity ($USD).

//First ask for user input for the following: # of light bulbs, average # of hours each bulb is on in a day, AC unit's power, typical # of
//hours AC unit is ON in a day, # of fans, average hours each fan is on during a day, and finally ask input for per-unit price of electricity.
//The program will first output a message stating total electricity usage which we will calculate by adding up power usage of each power load (bulbs, fan, AC)
//power usage = (#number of item)*(power usage in watts)*(time used) / 1000 for kilowatthrs. This is per day.  Multiply by 30 to get the total month.
//Next we will find the percentage of the total power usage each "item" uses in percentages 100% * (power usage of item for 30 days) / (total power used for 30 days).
//Lastly we will use the energy cost input to calculate the electricity bill (kWh)*($USD/kWh)

int main() {
    const int powerBulbs = 60;//60 watts per bulb
    const int powerFans = 40; //40 watts per fan
    const double kW_Conv = .001; //conversion from Watt*hours to kiloWatt*hours.  Don't really need a variable for this, but why not to make it less confusing
    const int days = 30;      //days we are assuming are in a month
    const int numAC = 1;      //might as well be thorough with the variables.  Problem says assume 1 AC unit.  
    int numBulbs;             //bulb count
    double timeBulbs;         //average (hours) of each bulb used per day
    double powerAC;           //AC power usage (kW, kilowatts)
    double timeAC;            //average time AC is ON per day (hours)
    int numFans;              //fan count
    double timeFans;          //average (hoursJ) each fan is used per day
    int unit_Conv = 1;  //1 unit of electricity for billing is 1 kWh.  Therefore conversion is (1 unit / 1 kWh)
    double e_PPU;             //price per unit for electricity ($USD/1 unit, where 1 kWh/1 unit)

    

    cout << "Please enter the number of light bulbs you have: " << endl; //prompt for # of bulbs
    cin >> numBulbs;                                            //user input for # of bulbs

    cout << "Please enter the average # of hours each bulb is ON during one day: " << endl; //prompt for average time/day for bulbs
    cin >> timeBulbs;                                                                 //user input for average time/day for bulbs

    cout << "Please enter your AC's unit power: " << endl; //prompt for AC unit power
    cin >> powerAC;                                        //user input for AC unit power

    cout << "Please enter the # of hours your AC is typically ON during one day: " << endl; //prompt for hours/day AC is ON
    cin >> timeAC;                                                                      //user input for hours/day AC is ON

    cout << "Please enter the # of fans you have: " << endl; //prompt for # of fans 
    cin >> numFans;                                          //user input for # of fans

    cout << "Please enter the average # of hours each fan is ON is on day: " << endl; //prompt for hours/day fans are ON 
    cin >> timeFans;                                                                  //user input for average hours/day fans are ON  
    
    cout << "Please enter your per-unit price (cents) for electricity: " << endl; //prompt for electricity PPU 
    cin >> e_PPU;   
    
    double totalBulb = numBulbs * timeBulbs * powerBulbs * kW_Conv;                   //Bulbs total energy consumed per day
    double totalAC = numAC * timeAC * powerAC * kW_Conv;                              //AC total energy consumed per day
    double totalFans = numFans * timeFans * powerFans * kW_Conv;                      //Fans total energy consumed per day
    double grandTotal_day = totalBulb + totalAC + totalFans;                          //Total energy consumed per day
    double grandTotal_month = grandTotal_day * days;                                     //Total energy consumed over 30 days, also zybooks has this value as an integer and not a float
    double percentBulb = 100 * totalBulb / grandTotal_day;                            //Bulb energy consumption percentage
    double percentAC = 100 * totalAC / grandTotal_day;                                //AC energy consumption percentage
    double percentFans = 100 * totalFans / grandTotal_day;                            //Fan energy consumption percentage
    double e_Bill = grandTotal_month * unit_Conv * e_PPU / 100;                       //(total kWh / month) * (1 Unit / 1000 kWh) * ( cents /1 Unit) / (100 cents / 1 USD) = $USD / month

    cout << "Total electricity usage: " << round(grandTotal_month) << " kWh" << endl;   //to match zybooks example, I used round() here from <cmath>.  Only rounded in the output though, not in the calculations
    cout << setprecision(1) << fixed;                                                   //use stream manipulators to match zybooks example and only output 1 decimal place for the percentages
    cout << "Bulbs: " << percentBulb << "%" << "  AC: " << percentAC << "%" << "  Fans: " << percentFans << "%" << endl;   //each appliance's percent of energy consumption per day or month
    cout << setprecision(2) << fixed;                                                                                      //stream manipulators because the following output uses 2 decimal points 
    cout << "Electricity bill for the month: " << "$  " << e_Bill << endl;                                                  //Final bill.   

    return 0;

}