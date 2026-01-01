
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    queue<pair<int,int>> q;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        q.push({a, i + 1});   
    }

    int ans = 0;

    while (!q.empty()) {
        auto child = q.front();
        q.pop();

        child.first -= m;     
        ans = child.second;  

        if (child.first > 0) {
            q.push(child);   
        }
        
    }

    cout << ans << endl;
    return 0;
}
