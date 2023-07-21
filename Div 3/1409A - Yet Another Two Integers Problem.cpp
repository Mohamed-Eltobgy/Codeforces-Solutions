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
        int a, b;
        cin >> a >> b;
        ll x =  ceil(abs(a-b)/10.0);
        cout << x << endl;
    }
    return 0;
}
