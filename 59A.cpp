#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin >> s;
int letterupper = 0, letterlower = 0;
for(char c : s) {
if(islower(c))letterlower++;
else letterupper++;
    }
if(letterupper > letterlower) {
  for(char &c : s)
  c = toupper(c);
    }
else {
for(char &c : s)
  c = tolower(c);
  }
cout << s << endl;
return 0;
}
