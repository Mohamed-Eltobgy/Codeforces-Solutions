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
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string ans = "";
        for(int i=0; i<s.length(); i+=2){
            ans += s[i];
        }
        ans += s[s.length()-1];
        cout << ans << endl;
    }
    return 0;
}
