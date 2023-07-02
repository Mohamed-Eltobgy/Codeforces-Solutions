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
    int a, b, c;
    cin >> a >> b >> c;
    int arr[] = {a, b, c};
    sort(arr, arr+3);
    cout <<  arr[2]- arr[0] ;
    return 0;
}
