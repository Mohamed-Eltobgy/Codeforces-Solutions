#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
#include <list>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y, n;
        cin >> x >> y >> n;
        if(x > n){  //y is the only number that satisfies the conditions
            cout << y;
        }else{
            int temp = n/x; // temp = n div x
            y += temp*x;
            if(y > n){
                cout << y - x;
            }else{
                cout << y;
            }
        }
        cout << endl;
    }
    return 0;
}
