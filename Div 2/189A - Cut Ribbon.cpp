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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n+1, -1); // initialize all elements to -1
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        if(i >= a)
            dp[i] = max(dp[i], dp[i-a]);
        if(i >= b)
            dp[i] = max(dp[i], dp[i-b]);
        if(i >= c)
            dp[i] = max(dp[i], dp[i-c]);
        if(dp[i] != -1)
            dp[i]++;
    }
    cout << dp[n] << endl;
    return 0;
}
