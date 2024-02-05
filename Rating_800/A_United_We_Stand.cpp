
#include <bits/stdc++.h>
#define ll long long 
#define endl  "\n"
#define pb push_back 
#define mod 1e9 + 7 
#define PY cout<<"YES"<<endl;  
#define PN  cout<<"NO"<<endl; 

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;  
 
 void solution(){ 
    ll n; cin>>n; 
    vector<ll>a(n); 
    
      vector<int>b,c; 
      ll maxi = INT_MIN;
    for(int i=0; i<n; i++){
        cin>>a[i];  
        maxi = max(maxi , a[i]); 
    }    

     for(int i=0; i<n; i++){
        if(a[i] == maxi ){
            c.pb(maxi);
        } else{
            b.pb(a[i]);
        }
    }   
    
  
  
      if(b.size() == 0){// not possible
        cout<<"-1"<<endl; 
        
      } else{ 
     
     cout<<b.size()<<" "<<c.size()<<endl; 
      
      for(auto it : b){
        cout<<it<<" ";
      } 
      cout<<endl; 

      for(auto it : c){
        cout<<it<<" ";
      } 
      cout<<endl;
    
      } 
   
 }      

int main()
{
    fastread(); 
    ll t; cin>>t; 
    while(t--){
        solution();
    }
    return 0;
}
