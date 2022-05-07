#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <fstream>
using namespace std;

int file_to_array(char array[], string inputFile){
    char answer;
    int count = 0;
    ifstream inFile;
    inFile.open(inputFile);
    if (!inFile){
        return -1;
    }
    while (inFile >> answer){
        array[count] = answer;
        count += 1;
        if (count > 30){
            count -= 1;
            break;
        }
    }
    return count;
}

void grade_arbiter(char correctAns[], char studentAns[], int count){
    double wrongCount = 0.0;
    for (int i = 0; i < count; i++){
        if (studentAns[i] != correctAns[i]){
            cout << "Question " << i+1 << " has incorrect answer '" << studentAns[i] << "', the correct answer is '" << correctAns[i] << "'" << endl;
            wrongCount += 1;
        }
    }
    cout << wrongCount << " questions were missed out of " << count << endl;
    double grade = (1.0 - (wrongCount/count))*100.00;
    cout << "The student grade is " << fixed << setprecision(1) << grade << "%" << endl;
    if (grade >= 70){
        cout << "The student passed" << endl;
    }
    else{
        cout << "The student failed" << endl;
    }
}


int main(){
    string studentFile;
    string keyFile;
    int studentCount;
    int keyCount;
    char studentArray[30];
    char keyArray[30];

    cout << "Enter student answers file name" << endl;
    cin >> studentFile;

    studentCount = file_to_array(studentArray, studentFile);

    if (studentCount == -1){
        cout << "File \"" << studentFile << "\" could not be opened" << endl;
        return 0;
    }

    cout << "Enter correct answer file name" << endl;
    cin >> keyFile;

    keyCount = file_to_array(keyArray, keyFile);


    if (keyCount == -1){
        cout << "File \"" << keyFile << "\" could not be opened" << endl;
        return 0;
    }

    if (keyCount != studentCount){
        cout << "The student answers file has " << studentCount << " entries and the correct answers file has " << keyCount << " entries" << endl;
        cout << "Grading cannot be done if they are not the same" << endl;
        return 0;
    }

    if (!keyCount && !studentCount){
        cout << "The number of student answers and correct answers are both 0" << endl;
        cout << "No grade can be calculated" << endl;
        return 0;
    }

    grade_arbiter(keyArray, studentArray, keyCount);
}