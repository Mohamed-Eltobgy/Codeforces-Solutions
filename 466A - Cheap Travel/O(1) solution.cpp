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

    if (m * a <= b)     //checking if it is worth to buy a special ticket.
        cout << n * a << "\n";
    else
        cout << (n/m) * b + min((n%m) * a, b) << "\n";
    return 0;
}
