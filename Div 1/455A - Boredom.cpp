#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <queue>
#include <map>

using namespace std;
typedef long long ll;


const int maxn = 111111;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<pair<ll, ll> > v;
    long long f[maxn];
    map<ll,ll> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        m[arr[i]]+= arr[i];
    }

    for (map<ll, ll>::iterator it = m.begin(); it != m.end(); it++) {
        v.push_back(make_pair(it->first, it->second));
    }
    for (int i = 0; i < (int)v.size(); i++) {
        int pr = i - 1;
        if (pr >= 0 && v[pr].first + 1 == v[i].first) pr--;
        if (pr == -1) f[i] =  v[i].second;
        else f[i] = f[pr] + v[i].second;
        if (i != 0)
            f[i] = max(f[i], f[i - 1]);
    }
    cout << f[(int)v.size() - 1] << '\n';
    return 0;
}
