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
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int counter = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(arr[i] <= 5-k)
            counter++;
        if(counter == 3){
            ans++;
            counter = 0;
        }
    }
    cout << ans;
    return 0;
}
