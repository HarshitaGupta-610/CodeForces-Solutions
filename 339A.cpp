#include <bits/stdc++.h>
using namespace std;
string finalform(string &s ){
vector<char>a;
for(int i = 0 ; i < s.size() ; i++) {
	if(s[i] != '+') a.push_back(s[i]);
}
sort(a.begin() , a.end());
string ans = "";
for(int i = 0 ; i < a.size() - 1; i++){
ans += a[i] ;
ans += '+';
}
ans +=a[a.size()-1];
return ans;
}
 
int main()
{
string s;
cin >>s;
cout<<finalform(s);
return 0;
}
