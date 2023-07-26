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

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n), arr2;
        for(auto &x : arr){
            cin >> x;
            arr2.push_back(x);
        }
        sort(arr2.begin(), arr2.end());

        bool sorted = true;
        for(int i=0; i<n; i++){
            if(arr[i]%2 != arr2[i]%2){
                sorted = false;
                break;
            }
        }
        if(sorted)
            cout << "YES\n";
        else
            cout << "No\n";
    }
    return 0;
}
