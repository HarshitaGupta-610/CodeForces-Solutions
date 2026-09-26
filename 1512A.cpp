#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n+1);

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        if(a[1]!=a[2]){
            if(a[1]==a[3])
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }
        else{
            for(int i=2;i<=n;i++){
                if(a[i]!=a[1]){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
