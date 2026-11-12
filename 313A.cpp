#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    if(s[0]!='-'){
        cout<<s<<endl;
    }
    else{
        // Remove the last digit
        string s1=s.substr(0,s.size()-1);

        // Remove the second-last digit
        string s2=s.substr(0,s.size()-2)+s.back();

        long long a=stoll(s1);
        long long b=stoll(s2);

        cout<<max(a,b)<<endl;
    }

    return 0;
}
