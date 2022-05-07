#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

char getLetterGrade(double avgGrade){
    if (avgGrade >= 90){
        return 'A';
    }
    else if(avgGrade >= 80){
        return 'B';
    }
    else if(avgGrade >= 70){
        return 'C';
    }
    else if(avgGrade >= 60){
        return 'D';
    }
    else{
        return 'F';
    }
}

int main(){
    const int SIZE = 5;
    int id[SIZE] = {110, 131, 120, 113, 155};
    double avg[SIZE];
    char grade[SIZE];

    for (int i=0; i < SIZE; i++){
        cout << "Enter average for student " << id[i] << "." << endl;
        cin >> avg[i];
        grade[i] = getLetterGrade(avg[i]);
        cout << "Student ID: " << id[i] << " Average: " << avg[i] << " Letter Grade: " << grade[i] << endl;
    }
}