
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
    map<int, int>mp; 
    for(int i=0; i<n; i++){
        cin>>a[i];   
        mp[a[i]]++;
    } 

    if(mp.size() == 1){
        PN;
    }else{ 
        vector<int>ans1, ans2; 

        for(auto x : mp){
          ans1.push_back(x.first); 

          for(int i=2; i<=x.second; i++){
            ans2.push_back(x.first);
          }
        } 
        sort(ans1.rbegin(), ans1.rend()); 

        PY; 
        for(auto it : ans1){
            cout<<it<<" ";
        } 
        for(auto it : ans2){
            cout<<it<<" ";
        } 
        cout<<endl;
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
