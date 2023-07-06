#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mx = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    int total = 0;
    for(int i=0; i<n; i++){
        total += (mx-arr[i]);
    }
    cout << total;
    return 0;
}
