#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<pair<string, int>> rounds(n);
    map<string, int> finalScore;
 
    // Read input and compute final scores
    for (int i = 0; i < n; i++) {
        cin >> rounds[i].first >> rounds[i].second;
        finalScore[rounds[i].first] += rounds[i].second;
    }
 
    // Find maximum final score
    int maxScore = INT_MIN;
    for (auto &p : finalScore) {
        maxScore = max(maxScore, p.second);
    }
 
    // Step 2: determine earliest to reach maxScore
    map<string, int> running;
    for (int i = 0; i < n; i++) {
        string name = rounds[i].first;
        int score = rounds[i].second;
 
        running[name] += score;
 
        if (running[name] >= maxScore && finalScore[name] == maxScore) {
            cout << name;
            return 0;
        }
    }
}
