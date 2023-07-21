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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int index = 0, ans;
        bool flag = false;
        for(int i=1; i<n; i++){
            if(arr[index] != arr[i]){
                if(arr[index] == arr[i+1] || arr[index] == arr[i-1]){
                    ans = i;
                }else{
                    ans = index;
                }
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}
