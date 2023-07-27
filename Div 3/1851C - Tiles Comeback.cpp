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
        int n, k;
        cin >> n >> k;
        vector<int> colors(n);
        map<int, int> freq;
        for(auto &x : colors){
            cin >> x;
            freq[x]++;
        }

        if(freq[colors[0]] < k || freq[colors[n-1]] < k){
            cout << "No" << endl;
            continue;
        }
        if(colors[0] == colors[n-1]){
            cout << "Yes" << endl;
            continue;
        }
        int p = k;
        int i;
        for(i=0; i<n; i++){
            if(p <= 0)
                break;
            if(colors[i] == colors[0]){
                p--;
            }
        }
        p = k;
        for(int j=i; j<n; j++){
            if(colors[j] == colors[n-1]){
                p--;
            }
        }
        if(p <= 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
