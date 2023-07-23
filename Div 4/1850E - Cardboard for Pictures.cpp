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
void solve(){       //4n*w^2 + 2*2*w*sum - c= 0
    int t;
    cin >> t;
    while(t--){
        ll n, c;
        cin >> n >> c;
        ll arr[n];
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
            c = c- pow(arr[i],2);
        }
        double x = (-2*2.0*sum + sqrt(pow(sum*4,2) + 4.0*4*n*c))/(2.0*4*n);
        if(x < 0){
            x = (-2*2*sum - sqrt(pow(sum*4,2) + 4*4*n*c))/(2*4*n);
        }
        cout << (ll)round(x) << endl;
    }
}

int main() {
    solve();

    return 0;
}
