#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <deque>
#include <queue>
#include <map>

using namespace std;
typedef long long ll;



void dfs(int arr[], int i, int t, bool visited[], int n){
    if(i == t){
        cout << "YES";
        exit(0);
    }
    if(!visited[i] && i < n){
        visited[i] = true;
        dfs(arr, i+arr[i], t, visited, n);
    }else{
        cout << "No";
        exit(0);
    }
}

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for(int i=1; i<n; i++){
        cin >> arr[i];
    }
    bool visited[n+1] = {false};
    dfs(arr, 1, t, visited, n);

    return 0;
}
