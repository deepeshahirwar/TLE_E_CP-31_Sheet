
#include<bits/stdc++.h>
using namespace std;

void solution(){
int n; cin>>n; 
vector<int>a(n);
int two = 0; 
for(int i = 0; i < n; ++i){
  cin>>a[i]; 
  if(a[i] == 2)
    two++;
 }  
 int ans = 0;  
 int tillHere =0;  
 for(int i = 0; i < n; ++i){
  
  if(a[i] == 2)
    tillHere++; 

    if(tillHere*2 == two){
       ans = i+1; 
       break;
    }
 }   
if(ans){
    cout<<ans<<endl;
}else{
cout<<"-1"<<endl; 
}


} 
int main() {

int  t; cin>>t;
while(t--){ solution();}

return 0;
}