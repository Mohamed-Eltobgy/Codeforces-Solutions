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
    int n, m;
    cin >> n >> m;
    if(min(n,m)%2 == 0){
        cout << "Malvika";
    }else{
        cout << "Akshat";
    }
    return 0;
}
