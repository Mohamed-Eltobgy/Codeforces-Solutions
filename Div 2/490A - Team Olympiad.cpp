#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <queue>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    queue<int> q[3];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        q[arr[i]-1].push(i+1);
    }

    int mn = min(q[0].size(),q[1].size());
    mn = min(mn, (int) q[2].size());
    cout << mn << endl;
    for(int i=0; i<mn; i++){
        for(int i=0; i<3; i++){
            cout << q[i].front() << " ";
            q[i].pop();
        }
        cout << endl;
    }
    return 0;
}
