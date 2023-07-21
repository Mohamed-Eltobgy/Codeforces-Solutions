#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
#include <list>
using namespace std;
typedef long long ll;

int counter;
void dfs(int n, list<int> ls[], int index) {
    auto it = ls[index].begin();
    while (it != ls[index].end()) {
        counter++;
        dfs(n, ls, *it);
        ++it;
    }
}

int main() {
    int n;
    cin >> n;
    list<int> ls[n];
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x != -1){
            ls[i].push_back(x-1);
        }
    }

    int mx = 0;
    for(int i=0; i<n; i++){
        counter = 1;
        dfs(n, ls, i);
        mx = max(mx, counter);
    }
    cout << mx;
    return 0;
}
