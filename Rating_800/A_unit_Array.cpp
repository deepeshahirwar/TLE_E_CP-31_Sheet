
#include <bits/stdc++.h>
#define ll long long
#define pb push_back 
#define mod 1e9 + 7 
#define PY cout<<"YES"<<endl;  
#define PN  cout<<"NO"<<endl; 

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;  
 
 void solution(){
    int n; cin>>n;  
    int num; 
    int neg =0,pos=0; 
     for(int i=0; i<n; i++){
         cin>>num; 
         if(num > 0)
            pos++;
         else
            neg++;
     }  

     int ans =0;  
     while(neg > pos){
        neg--; 
        pos++;
        ans++;
     } 
     if(neg%2 == 1){
        ans++;
     }
  
  cout<<ans<<endl;
 }      

int main()
{
    fastread(); 
    int t; cin>>t; 
    while(t--){
        solution();
    }
    return 0;
}
