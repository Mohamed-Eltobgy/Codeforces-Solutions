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
        int k;
        cin >> k;
        int counter =0;
        while(counter < k){
            counter++;
            if(counter%3 == 0 || counter%10 == 3)
                k++;
        }
        cout << counter << endl;
    }
    return 0;
}
