#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v;
    int d=10;
    while(n){
        if(n%d)
            v.push_back(n%d);

        n-=n%d;
        d*=10;
    }
    cout<<v.size()<<endl;
    for(int x:v)
        cout<<x<<" ";

    cout<<endl;
}

return 0;
}
