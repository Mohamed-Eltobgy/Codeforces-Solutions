#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstring>

using namespace std;
typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    if(n >= m){
        cout << n-m;
        return 0;
    }
    bool visited[2*m + 1];
    memset(visited, false, sizeof(visited));
    vector<vector<int>> v(1);
    v[0].push_back(n);
    visited[n] = true;
    for(int i=0; i<(int) v.size(); i++){
        v.push_back({});
        for(int j=0; j<(int) v[i].size(); j++){
            if(visited[v[i][j] - 1] == false && v[i][j]-1 >= 0){
                v[i+1].push_back(v[i][j]-1);
                visited[v[i][j]-1] = true;
            }
            if(visited[v[i][j] * 2] == false && v[i][j]*2 <= 2*m){
                v[i+1].push_back(v[i][j]*2);
                visited[v[i][j]*2] = true;
            }
            if((v[i][j]-1) == m || (v[i][j]*2) == m){
                cout << i+1;
                return 0;
            }
        }
    }
    return 0;
}
