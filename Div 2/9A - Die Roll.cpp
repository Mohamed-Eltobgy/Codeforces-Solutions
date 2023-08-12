#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>


using namespace std;

int main() {
    int y, w;
    cin >> y >> w;
    int mx = max(y, w);
    int ans = 6 - mx + 1;
    int gcd = __gcd(6, ans);
    cout << ans/gcd << "/" << 6/gcd;
    return 0;
}
