#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        for(int i=0;i<s.size();i+=2)
            cout<<s[i];

        if(s.size()%2==0)
            cout<<s.back();

        cout<<endl;
    }

    return 0;
}
