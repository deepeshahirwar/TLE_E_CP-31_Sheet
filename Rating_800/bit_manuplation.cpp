
#include <bits/stdc++.h>
#define ll long long
#define pb push_back 
#define mod 1e9 + 7 
#define PY cout<<"YES"<<endl;  
#define PN  cout<<"NO"<<endl; 

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;  
 // Bit manuplation tricks 
 void solution(){
// 1.  check given number even or odd  
 /* int x = 10; 
 if(x&1){
    cout<<"odd"<<endl;
 }  else {
    cout << "even" << endl;
 } */ 
 
// 2. check if number is a power of 2 

// int x = 8; 
// if(x&& ! (x&(x-1))){
//     cout<<x<<"  is a power of 2" << endl;
// } 
// else{
//      cout<<x<<"  is a not  power of 2" << endl;
// }
 
// 3. playing with kth bit 
/*
a.check if kth bit is set bit or not  
b. toggle the kth bit --> x ^ (1<<k) 
c. set the kth bit  --> x | (1<<k)
d. unset the kth bit  --> x& (~(1<<k)) 
*/
// int x = 5; // bin(5) = 101  
// int k = 2; 
// if(x&(1<<k)){
//     cout<<"kh bit is  set bit "<< endl;
// } else{
//     cout<<" kth bit is not a set bit " << endl;
// } 

// 4. multiply and divide number by power of 2 
//  a. multiply -->  (x<<k) left shift 
//  b. divide  --> (x>>k) rihgt shift  

// int x  = 10; 
// int ans1 = x/4; 
// int ans2 = x<<2; 

// if(ans1 = ans2){
//     cout<<"both are same" << endl;
// } 
 
// int  y = 10; 
// int num1 = y*4; 
// int num2 = y>>4; 

// if(ans1 = ans2){
//     cout<<"both are same" << endl;
// } 
 


 // 5. find out x%2^k 
// int x = 10; 
// int num = x%4; // num = 2 
// int num2 = x & ((1<<4) - 1); 
 
//  if(num = num2){
//     cout << " both are same " << endl;
//  } 

 
 // 6. Swapping two numbers without a temproray veriable 
//  int x = 2; int y = 5;  
//  cout<< " before swaping " <<" x -> "<<x <<" y -> "<<y <<endl;
//  x = x^y; 
//  y = x^y; 
//  x = x^y; 

//  cout<< " after swaping " <<" x -> "<<x <<" y -> "<<y <<endl;
 
// 10 . finding no. of set bits in a number x 
int x = 5 ; 
long long y = 7; 

int noOfSetBit = __builtin_popcount(x);
long long  noOfSetBit2 = __builtin_popcountll(y);
 
 cout<<"no. of set bit in  5 is : "<<noOfSetBit<<endl;  
 cout<<" no. of set bits in 7 is :"<<noOfSetBit2<<endl; 

  }      

int main()
{
    fastio(); 
    solution();
}
