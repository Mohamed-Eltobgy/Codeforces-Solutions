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
        bool flag = true;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        for(int i=1; i<n; i++){
            if(arr[i]- arr[i-1] > 1){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
