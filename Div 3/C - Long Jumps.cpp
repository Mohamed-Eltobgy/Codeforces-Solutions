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
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        ll arr2[n] = {};
        for(int i=0; i<n; i++){
            arr2[i] += arr[i];
            if((i + arr[i]) < n){
                arr2[i + arr[i]] = max(arr2[i+ arr[i]], arr2[i]);
            }
        }
        ll mx = 0;
        for(int i=0; i<n; i++){
            mx = max(mx, arr2[i]);
        }
        cout << mx << endl;
    }
    return 0;
}
