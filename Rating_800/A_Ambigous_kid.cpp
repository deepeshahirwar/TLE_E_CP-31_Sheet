#include<bits/stdc++.h>
using namespace std;  

 void solve(){
    int n; cin>>n; 
    vector<int>a(n); 
   
    for(int i=0; i<n; ++i)cin>>a[i];  
    int min_opr =abs(a[0]); 
    for( auto it : a){
        min_opr = min(min_opr, abs(it));
    }
    cout<<min_opr<<endl;
 }
 int main(){
   ios::sync_with_stdio(false);
	cin.tie(nullptr);   

        solve();

    return 0;
 }