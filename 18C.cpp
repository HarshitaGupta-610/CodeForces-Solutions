#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> pref(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    pref[0] = a[0];
    for(int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }

    long long total = pref[n - 1];
    int count = 0;
    for(int i = 0; i < n - 1; i++) {

        long long leftSum = pref[i];
        long long rightSum = total - pref[i];

        if(leftSum == rightSum) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
