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
    int n;
    cin >> n;
    if(n>0){
        cout << n;
    }else{
        n = abs(n);
        int temp = n%100;
        if(temp%10 >= temp/10){ //remove last digit
            cout << -n/10;
        }else{
            string s = "-" + to_string(n/100);
            s += to_string(n%10);
            n = stoi(s);
            cout << n;
        }
    }
    return 0;
}
