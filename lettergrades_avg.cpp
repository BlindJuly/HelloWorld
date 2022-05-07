#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


 double computeAverage(double argSource[], int argSize){
        double total = 0;
        for (int i = 0; i < 3; i++){
            total += argSource[i];

        }
        return (total / 3);
    }

void computerLetterGrade(double argSource[], char argTarget[], int argSize){
        for (int i = 0; i < argSize; i++){
            if (argSource[i] >= 90){
                argTarget[i] = 'A';
            }
            else if(argSource[i] >= 80){
                argTarget[i] = 'B';
            }
            else if(argSource[i] >= 70){
                argTarget[i] = 'C';
            }
            else if(argSource[i] >= 60){
                argTarget[i] = 'D';
            }
            else{
                argTarget[i] = 'F';
            }
        }
    }

void printOutput();




int main(){

    int id[] = {110, 131, 120, 113, 155};
    double allAvg[5];
    double student_grades[5][3] = { {100,100,100}, 
				{85,80,75}, 
				{75,65,55}, 
				{30,20,35},
				{75,75,75}
			     };

    
}

