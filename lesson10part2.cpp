#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

const int MAX_COLUMNS = 5;

int readFile(double values[][MAX_COLUMNS], int maxRows, string inputFileName);

double average(double values[][MAX_COLUMNS], int numberRows);

double columnAverage(double values[][MAX_COLUMNS], int column, int numberRows);

double smallestValue(double values[][MAX_COLUMNS], int row);



int main(){
    const int MAX_ROWS = 30;
    string inputFileName;
    double totAverage;
    double grades[MAX_ROWS][MAX_COLUMNS];

    cout << "Enter input file name" << endl;

    cin >> inputFileName;

    int actualRows = readFile(grades, MAX_ROWS, inputFileName);
    if (actualRows = -1){
        return -1;
    }

    if (actualRows == 0){
        cout << "The input file \"" << inputFileName << "\" did not contain any data" << endl;
        return -1;
    }

    totAverage = average(grades, MAX_ROWS);

    cout << "Average for all values is " << totAverage << endl;

    for (int m = 0; m < MAX_COLUMNS; m++){
        cout << "Average for column " << m << " is " << fixed << setprecision(2) << columnAverage(grades, m, actualRows) << endl;
    }
    for (int n = 0; n < MAX_ROWS; n++){
        cout << "Smallest value for row " << n << " is " << fixed << setprecision(2) << smallestValue(grades, n) << endl;
    }
    return 0;
}


int readFile(double values[][MAX_COLUMNS], int maxRows, string inputFileName){
    ifstream inFile;
    double grade1, grade2, grade3, grade4, grade5;
    int count = 0;
    inFile.open(inputFileName);
    if (!inFile){
        cout << "File " << inputFileName << " could not be opened" << endl;
        return -1;
    }
    while (inFile >> grade1 >> grade2 >> grade3 >> grade4 >> grade5){
        values[count][0] = grade1;
        values[count][1] = grade2;
        values[count][2] = grade3;
        values[count][3] = grade4;
        values[count][4] = grade5;
        count += 1;
        if (count > maxRows){
            break;
        }
    }
    return (count - 1);
}

double average(double values[][MAX_COLUMNS], int numberRows){
    double total = 0.0;
    for (int i = 0; i < numberRows; i++){
        for (int j = 0; j < MAX_COLUMNS; j++){
            total += values[i][j];
        }
    }
    return (total / (numberRows*MAX_COLUMNS));
}

double columnAverage(double values[][MAX_COLUMNS], int column, int numberRows){
    double total = 0.0;
    for (int i = 0; i < numberRows; i++){
        total += values[i][column];
    }
    return (total / numberRows);
}

double smallestValue(double values[][MAX_COLUMNS], int row){
    double smallest = values[row][0];
    double nextValue;
    for (int j = 0; j < MAX_COLUMNS; j++){
        nextValue = values[row][j];
        if (nextValue < smallest){
                smallest = nextValue;
            }
    }
    return smallest;
}