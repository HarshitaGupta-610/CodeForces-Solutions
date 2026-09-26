#include<bits/stdc++.h>
using namespace std;

int solve(int &a,int &b){
    int diff=abs(a-b);
    return (diff+9)/10;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        cout<<solve(a,b)<<endl;
    }

    return 0;
}
