#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    deque<int> dq;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        dq.push_back(x);
    }
    int sum1 = 0 , sum2 = 0;
    int* sum;
    for(int i=0; i<n; i++){
        if(i%2 == 0){   //Sereja's turn
            sum = &sum1;
        }else{          //Dima's turn
            sum = &sum2;
        }
        if(dq.front() > dq.back()){ //choosing maximum of both sides
            *sum += dq.front();
            dq.pop_front();
        }else{
            *sum += dq.back();
            dq.pop_back();
        }
    }
    cout << sum1 << " " << sum2;
    return 0;
}
