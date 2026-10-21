#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int i=1,cnt=1;
        while(cnt<k){
            i++;
            if(i%3!=0 && i%10!=3)
                cnt++;
        }
        cout<<i<<endl;
    }
    return 0;
}
