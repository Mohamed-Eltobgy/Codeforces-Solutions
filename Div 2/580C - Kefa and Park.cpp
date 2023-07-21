#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstring>
#include <stack>
using namespace std;
typedef long long ll;

int temp, counter = 0;
void dfs(int n, int m, vector<vector<int>> graph, vector<int> arr, bool visited[], int index) {
    stack<pair<int, int>> s;
    s.push(make_pair(index, 0));
    while (!s.empty()) {
        int curr = s.top().first;
        int cat_count = s.top().second;
        s.pop();
        visited[curr] = true;
        if (arr[curr] == 1) {
            cat_count++;
        } else {
            cat_count = 0;
        }
        if (cat_count > m) {
            continue;
        }
        bool is_leaf = true;
        for (int neighbor : graph[curr]) {
            if (!visited[neighbor]) {
                s.push(make_pair(neighbor, cat_count));
                is_leaf = false;
            }
        }
        if (is_leaf) {
            counter++;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool visited[n] = {false};
    vector<vector<int>> graph(n);
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        graph[x - 1].push_back(y - 1);
        graph[y - 1].push_back(x - 1);
    }
    dfs(n, m, graph, arr, visited, 0);
    cout << counter << endl;
    return 0;
}
