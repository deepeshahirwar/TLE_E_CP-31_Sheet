/******************  DEEPESH AHIRWAR ****************/ 
#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462 
#define py cout<<"YES\n"
#define pn cout<<"NO\n" 

#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end() 
#define sort(x) sort(x.begin(),x.end())
#define reverse(x) reverse(x.begin(),x.end())
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
/*************** MY CP TAMPLATE END HERE ****************/
void solution(){
ll a,b,c; cin>>a>>b>>c; 
  
  if( (b-a) == (c-b))py; 
  else if((a+c)%(2*b) ==0)py;
  else if((2*b-a) > 0 && (2*b-a)%c == 0)py; 
  else if((2*b-c) > 0 && (2*b-c)%a == 0)py; 
  else pn;
 
} 
int main() {
fastio();
/********** YOUR CODE START HERE  ***********/
ll t; cin>>t;
while(t--){ solution();}

return 0;
}