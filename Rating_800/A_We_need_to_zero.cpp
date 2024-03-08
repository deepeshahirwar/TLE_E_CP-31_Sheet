/***************************  DEEPESH AHIRWAR *********************************/ 

#include<bits/stdc++.h>

using namespace std; 

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


void solution(){
  ll n; cin>>n; 
  vector<ll>a(n);  
  ll ans=0; 
  for( auto &it : a){
    cin>>it; 
    ans ^= it;
  } 
    
  if(n%2 == 0){
    if(ans == 0){
      cout<<1<<endl;
    }else{
      cout<<-1<<endl;
    }
  } 
  else{
    cout<<ans<<endl;
  } 

} 

int main() {

  fastio();  

/********** YOUR CODE START HERE  ***********/
  
  ll t; cin>>t; 
  while(t--){
    solution();
  } 

  return 0;
}
