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
    ll n;
    cin >> n;
    ll left =2;
    ll primes[n+1];
    vector<ll> v;  //contain primes
    vector<ll> v2; //contain composites
    for(ll i=0; i<=n; i++){
        primes[i] = i;
    }
    while(left< n){
        v.push_back(left);
        for(ll i=2; (left*i)<n; i++){
            if(primes[left*i] != 0)
                v2.push_back(primes[left*i]);
            primes[left*i] = 0;
        }
        left++;
        while(primes[left] == 0){
            left++;
        }
    }
    for(ll i=0; i<v2.size(); i++){
        ll x = n-v2[i];
        if(binary_search(v.begin(), v.end(), x)){
            continue;
        }else{
            cout << v2[i] << " " << x;
            break;
        }
    }
    return 0;
}
