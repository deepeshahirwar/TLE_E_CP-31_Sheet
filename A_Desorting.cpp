
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
    for(int i=0; i<n; i++)cin>>a[i];  
      
      int mini = INT_MAX; 
      bool ok = false;
     for(int i=0; i<n-1; i++){ 
        if(a[i]>a[i+1]){
            ok = true; 
            break; 
        }
       mini = min(mini , abs(a[i]-a[i+1]));
     }
 
 if(ok){
    cout<<0<<endl;
 }else{
  cout<<(mini/2)+1<<endl;
 }
  

     
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
