/*
  3,7,15,31,63,127,....upto n terms
*/

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n,p=3;
    cout<<"Enter number:\n";
    cin>>n;
   for(int i=1;i<=n;i++){
       cout<<p<<" ,";
       p=2*p+1;
   }
    
    
    
return 0;

}