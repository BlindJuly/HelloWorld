#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    char board[3][3] = {{'0', '0', '0'}, {'0', '0', '0'}, {'0', '0', '0'}};
    while(true){
        int i;
        int j;
        cout << "Player 1, please pick a square to put an X on the 3 x 3 grid(ex. '0 0' for top left square): " << endl;
        cin >> i >> j;
        if (i == 5){
            break;
        }
        board[i][j] = 'X';
        for (int n = 0; n < 3; n++){
            cout << board[n][0] << board[n][1] << board[n][2] << endl; 
        }
    }
}