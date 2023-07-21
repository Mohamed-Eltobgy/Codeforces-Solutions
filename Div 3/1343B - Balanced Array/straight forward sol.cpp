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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int odd =0, even =0;

        int arr1[n/2];
        for(int i=1; i<=n/2; i++){
            arr1[i-1] = i*2;
            even += i*2;
        }

        int arr2[n/2];
        for(int i=0; i<n/2; i++){
            arr2[i] = 2*i+1;
            odd += arr2[i];
        }
        bool flag = false;
        if((n/2)%2 == 1){ //this means sum of right half is always odd
            cout << "NO" << endl;
            continue;
        }
        for(int i=0; i< 10e9; i++){
            if(even == odd){
                cout << "YES" << endl;
                flag = true;
                break;
            }else if(even > odd){
                arr2[n/2-1] += 2;
                odd += 2;
            }else{
                arr1[n/2-1] += 2;
                even += 2;
            }
        }
        for(int i=0; i<n/2; i++){
            cout << arr1[i] << " ";
        }
        for(int i=0; i<n/2; i++){
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
