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
using namespace std;
typedef long long ll;
void solve(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int ans = 0;
        map<int,int> cnt;
        for(auto &[key , value] : mp){
            for(int j=1; j*key <= n; j++){
                cnt[j*key] += mp[key];
            }
        }
        for(auto &[key , value] : cnt){
            ans = max(ans, value);
        }
        cout << ans << endl;
    }
}

int main() {
    solve();
    return 0;
}
