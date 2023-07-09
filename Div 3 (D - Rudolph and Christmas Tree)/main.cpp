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
        int n, d, h;
        cin >> n >> d >> h;
        double arr[n];
        for(int i=0; i<n ;i++){
            cin >> arr[i];
        }
        double angle = atan( (double) h / (d/2.0) );
        double area = 0;
        for(int i= n-1; i>= 0; i--){
            area += 0.5*d*h;
            if((i != (n-1)) && ((arr[i] + h) > arr[i+1])){
                double temp = (h- arr[i+1] + arr[i])/(tan(angle));
                area = area - (h- arr[i+1] + arr[i])*temp;
            }
        }
        cout << setprecision(10) << area << endl;
    }
    return 0;
}
