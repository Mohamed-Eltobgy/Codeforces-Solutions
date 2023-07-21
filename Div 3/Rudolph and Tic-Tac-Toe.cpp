#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <queue>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        char game[3][3];
        string winner = "DRAW";
        int first = 0, sec =0, third = 0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin >> game[i][j];
            }
        }
        bool flag = true;
        for(int i=0; i<3; i++){ //check rows
            for(int j =0; j<2; j++){
                if(game[i][j] != game[i][j+1]){
                    flag = false;
                }
            }
            if(flag && game[i][i] != '.'){
                winner = game[i][i];
                break;
            }
            flag = true;
        }

        for(int i=0; i<3; i++){ //check columns
            for(int j =0; j<2; j++){
                if(game[j][i] != game[j+1][i]){
                    flag = false;
                }
            }
            if(flag && game[i][i] != '.'){
                winner = game[i][i];
                break;
            }
            flag = true;
        }

        for(int i=0; i<2; i++){ //check main diagonal
            if(game[i][i] != game[i+1][i+1]){
                flag = false;
            }
        }
        if(flag){
            winner = game[1][1];
        }
        if(game[0][2] == game[1][1] && game[0][2] == game[2][0]){ //check other diagonal
            winner = game[1][1];
        }
        if(winner == "."){
            winner = "DRAW";
        }
        cout << winner << endl;
    }
    return 0;
}
