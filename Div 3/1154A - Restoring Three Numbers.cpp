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
    int arr[4];
    int mx = 0;
    for(int i=0; i<4; i++){
        cin >> arr[i];
        mx = max(arr[i], mx);
    }
    for(int i=0; i<4; i++){
        if((mx - arr[i]) != 0){
            cout << mx - arr[i] << " ";
        }
    }
    return 0;
}
