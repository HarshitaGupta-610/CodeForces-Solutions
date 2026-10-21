#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a[4]; // a[1], a[2], a[3] store student indices

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a[x].push_back(i); // Store this student's index in their skill group
    }

    int teams=min({a[1].size(),a[2].size(),a[3].size()});

    cout<<teams<<endl;

    for(int i=0;i<teams;i++){
        cout<<a[1][i]<<" "<<a[2][i]<<" "<<a[3][i]<<endl;
    }

    return 0;
}
