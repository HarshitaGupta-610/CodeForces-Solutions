#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int mishka=0, chris=0;

    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;

        if(a>b)
            mishka++;
        else if(b>a)
            chris++;
    }

    if(mishka>chris)
        cout<<"Mishka";
    else if(chris>mishka)
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";

    return 0;
}
