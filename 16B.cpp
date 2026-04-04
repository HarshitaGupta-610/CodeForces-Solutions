#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n , m;
    cin >> n >>m;
    vector<pair<long long , long long>> v(m);
    for(int i = 0 ; i < m ;i++)
    cin >> v[i].first>>v[i].second;
    sort(v.begin() , v.end() ,[](pair <long long , long long> pairOld , pair<long long , long long> pairNow){
        return pairOld.second > pairNow.second;
    });
    long long total = 0 , boxes = 0;
    for(int i = 0 ; i < m ; i++){
        long long pairNow = min(v[i].first , n - boxes);
        total+= pairNow * v[i].second;
        boxes+= pairNow;
        if(boxes == n) break;
    }
    cout<< total <<endl;
    return 0;
}
