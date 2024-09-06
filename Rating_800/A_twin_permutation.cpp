
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
    vector<int>a(n);  
     int N = n+1;  
     
    for(int i=0; i<n; i++){
        cin>>a[i]; 
        cout<< N- a[i] <<" ";
    } 
    cout<<endl;

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
