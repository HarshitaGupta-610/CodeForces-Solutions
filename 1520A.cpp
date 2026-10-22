#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        map<char,int> m;
        string s;
        cin>>s;

        int flag=1;
        m[s[0]]=1;

        for(int i=1; i<n; i++){
            if(m[s[i]]==1 && s[i]!=s[i-1]){
                flag=0;
                break;
            }

            m[s[i]]=1;
        }

        cout<<(flag?"YES":"NO")<<endl;
    }

    return 0;
}
