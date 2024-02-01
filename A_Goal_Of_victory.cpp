
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
    int neg_sum =0,pos_sum=0; 
     for(int i=0; i<n-1; i++){
         cin>>num; 
         if(num > 0){
            pos_sum +=num;
         }else{
            neg_sum += num;
         } 

     }  

     cout<<(pos_sum + neg_sum)*-1<<endl;
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
