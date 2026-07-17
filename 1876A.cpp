#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , pak;
        cin >> n >> pak;
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        vector<int>b(n);
        for(int i = 0 ; i < n ; i++){
            cin >> b[i];
        }
        vector<pair<int,int>>p;
        for(int i = 0 ; i < n ; i++){
            p.push_back({b[i] , a[i]});
        }
        sort(p.begin() , p.end());
        long long cost = pak;
        int done = 1;
        int i = 0;
        while( i < n && done < n && p[i].first < pak){
          int  people = min(p[i].second , n - done);
            cost += 1LL *people * p[i].first;
            done+=people;
            i++;
        }
        cost += 1LL *(n-done) * pak;
        cout<<cost<<endl;
    }
    return 0;
}
