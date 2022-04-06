#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int overall_count = 0;
    for(int i = 0; i < 255; i++){
        int nEnd = 0;
        int count = 0;
        int num = i;
        if (num < 16){
            nEnd = 4;
        }
        else if(num < 32){
            nEnd = 5;
        }
        else if(num < 64){
            nEnd = 6;
        }
        else if(num < 128){
            nEnd = 7;
        }
        else{
            nEnd = 8;
        }
        for(int n = 0; n < nEnd; n++){
            if (num % 2 != 0){
                cout << 1;
            }
            else{
                count += 1;
                cout << 0;
            }
            num = num/2; 
        }
        cout << endl;
        if(count >= 4){
            cout << "THIS IS A TEST" << endl;
            overall_count += 1;
        }
        
    }
    cout << overall_count;
}