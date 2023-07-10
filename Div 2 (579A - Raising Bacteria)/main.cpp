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
    ll x;
    cin >> x;
    int counter = 0;
    while(x){
        ll temp = log2(x);
        x = x - pow(2, temp);//get most bacterias resulting from 1 bacteria
        counter++;
    }
    cout << counter;
    return 0;
}
