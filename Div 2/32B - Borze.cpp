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
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '.'){
            cout << 0;
        }else if(s[i] == s[i+1] && i<s.length()-1){
            cout << 2;
            i++;
        }else{
            cout << 1;
            i++;
        }
    }
    return 0;
}
