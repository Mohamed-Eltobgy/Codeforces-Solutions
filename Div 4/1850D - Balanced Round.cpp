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

void solve(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll arr[n+1];
        ll mx = 0;
        for(ll i=0; i<n; i++){
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        arr[n] = mx + k + 1;
        ll ans = 0;
        sort(arr, arr+n);
        ll left =0, right =0;
        while(right < n){
            if(abs(arr[right+1] - arr[right]) <= k){
                right++;
            }else{
                ans = max(ans, right - left + 1);
                right++;
                left = right;
            }
        }
        cout << n - ans << endl;
    }
}
int main() {
    solve();

    return 0;
}
