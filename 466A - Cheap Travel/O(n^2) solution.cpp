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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int mn = 10e6;
    for(int x=0; x<=n; x++){
        for(int y=0; y<=n; y++){
            if((x + y*m) >= n)  //make sure that no of tickets bought is greater than or equal n.
                mn = min(mn, (a*x + b*y));  //choose min feasible solution.
        }
    }
    cout << mn;
    return 0;
}
