#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <cctype>
#include <map>
using namespace std;



int main(){
    ifstream infile;
    infile.open("just_names.txt");
    string name;
    map<char, int> nameMap; 

    for (char i = 'A'; i <= 'Z'; i++){
        //nameMap.insert(pair<char, int>(i, 0));
        nameMap[i] = 0;                                     //went ahead and just got the count of all the letters in the alphabet because I was curious.  
    }

    while(infile >> name){
        nameMap[name[0]] += 1;
    }
    map<char, int>::iterator it;
    for (it = nameMap.begin(); it != nameMap.end(); it++) {
        if (it->first == 'A' || it->first == 'E' || it->first == 'I' || it->first == 'O' || it->first == 'U'){
            cout << it->first << ": " << it->second << " , ";
        }
    
    }
    infile.close();

}