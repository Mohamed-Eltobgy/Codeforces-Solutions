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
    int k, r;
    cin >> k >> r;
    for(int i=1; i<10; i++){
        int temp = k*i;
        int result = temp-r;
        if(result%10 == 0 || temp%10 == 0){
            cout << i;
            return 0;
        }
    }
    cout << 10;
    return 0;
}
