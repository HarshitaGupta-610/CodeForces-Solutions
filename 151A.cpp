#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int drink=(k*l)/c;
int lime=nl*np;
int salt=p/d;

int total=min({drink,lime,salt});

cout<<total/n;

return 0;
}
