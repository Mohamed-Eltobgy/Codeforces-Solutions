#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <set>
#include <unordered_set>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int n = (int) s.size();
        stack<int> v;
        bool yes = true;
        for(int i=0; i<n; i++){
            if(s[i] == '+'){
                if(v.empty()){
                    v.push(1);
                }else{
                    if(v.top() == 0)
                        v.push(0);
                    else
                        v.push(-1);
                }
            }
            if(s[i] == '-'){
                if(v.empty())
                    continue;
                if(v.size() > 2 && v.top() == 1){
                    v.pop();
                    v.top() = 1;
                }else
                    v.pop();
            }
            if(s[i] == '1'){
                if(v.empty())
                    continue;
                if(v.top() == 0){
                    yes = false;
                    break;
                }else
                    v.top() = 1;
            }
            if(s[i] == '0'){
                if(v.size() < 2 || v.top() == 1){
                    yes = false;
                    break;
                }else
                    v.top() = 0;
            }
        }

        if(yes)
            cout << "YES" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
