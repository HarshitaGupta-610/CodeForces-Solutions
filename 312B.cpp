#include<iostream>
using namespace std;
int main(){
    float a , b ,c , d;
    cin >> a >> b >> c >> d;
    float p1 = a / b;
    float p2 = c / d;
    float ans = p1 / (p2 + p1 - (p1*p2));
    cout<<ans<<endl;
}
