#include <bits/stdc++.h>
using namespace std;
int comp(string &s1 , string &s2){
for(int i = 0 ; i < s1.size() ; i++){
	s2[i] = tolower(s2[i]);
	s1[i] = tolower(s1[i]);
	if(s2[i] > s1[i])  return -1;
	else if(s2[i] < s1[i]) return 1;
}
return 0;
}
int main()
{
string s1 , s2;
cin >> s1 >>s2;
cout<<comp(s1,s2);
return 0;
}
