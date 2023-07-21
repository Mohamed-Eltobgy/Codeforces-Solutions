#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
typedef long long ll;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = k * l;      //total liters.
    int min1 = x / nl;  //no of liters to make a toast.
    int min2 = c * d;   //total slices.
    int min3 = p / np;  //no of grams to make a toast.
    //choose min of them.
    int ans = min(min1, min2);
    ans = min(ans,min3);
    cout << ans/n;
    return 0;
}
