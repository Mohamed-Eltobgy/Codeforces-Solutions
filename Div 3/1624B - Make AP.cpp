#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;
typedef long long ll;

bool check(int num, int num2, int num3, bool second){
    bool flag = false;
    for(int i=1; i < 10e5 ; i++){
        if(!second){
            if(abs(num2 - num*i)*2 == abs(num3 - num*i)){
                flag = true;
                break;
            }
        }else{
            if(abs(num2 - num*i) == abs(num3 - num*i)){
                flag = true;
                break;
            }
        }

    }
    return flag;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int new_a = c - 2*(c-b);
        if(new_a%a == 0 && new_a >= a){ // new_a >= a, bec m is +ve int.
            cout << "Yes\n";
            continue;
        }

        int new_b = a + (c-a)/2;
        if(new_b%b == 0 && (c-a)%2 == 0 && new_b >= b){ // make sure that (c-a)/2 is divisble by 2
            cout << "Yes\n";
            continue;
        }

        int new_c = a + 2*(b-a);
        if(new_c%c == 0 && new_c >= c){ //if c*m = new_c then new_c%c = 0.
            cout << "Yes\n";
            continue;
        }
        cout << "No\n";
    }
    return 0;
}
