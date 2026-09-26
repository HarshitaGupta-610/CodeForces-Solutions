#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n; 
vector<int> a(n);  
for(int i=0;i<n;i++) cin>>a[i];
int l=0;                      
int r=n-1;                   
int sereja=0;              
int dima=0;          

    for(int i=0;i<n;i++){         
        int x;    // Card selected in this turn

        if(a[l]>a[r]){            
            x=a[l];                
            l++;                   
        }
        else{                      // Otherwise right card is bigger/equal
            x=a[r];                // Take the right card
            r--;                   // Move right pointer
        }

        if(i%2==0)                 // Even turn: Sereja plays first
            sereja+=x;             // Add card to Sereja's score
        else                        // Odd turn: Dima plays
            dima+=x;               // Add card to Dima's score
    }

    cout<<sereja<<" "<<dima;       

    return 0;                      
}
