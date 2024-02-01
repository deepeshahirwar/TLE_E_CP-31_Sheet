
#include <bits/stdc++.h>
#define ll long long
#define pb push_back 
#define mod 1e9 + 7 
#define PY cout<<"YES"<<"\n"  
#define PN  cout<<"NO"<<"\n" 

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;  
 
 void solution(){
     int n; cin>>n; 
     
     vector<int>a(n);  
      set<int>st; 
     for(int i=0; i<n; i++){
        cin>>a[i];  
        st.insert(a[i]); 
     }  

    sort(a.begin(), a.end());  

     bool ok = false;  
     int cnt1=0,cnt2=0;
    if(st.size() > 2){
        ok = false;
    }
    else if( st.size() == 1){
        ok = true;
    } 
    else{ 
        for(int i=0; i<n; i++){
            if(a[i] == a[0])cnt1++;
            if(a[i] == a[n-1])cnt2++;
        } 

        if(cnt1 == cnt2 || abs(cnt1- cnt2) == 1){
            ok = true;
        }else{
            ok = false;
        }

    }
   
    if(ok){
        PY; 
    } else{
        PN;
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
