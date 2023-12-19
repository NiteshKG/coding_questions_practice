/*
    1
   12
  1 3
 1  4
12345    pattern



*/

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter number:\n";
    cin>>n;
    for(int i=1;i<=n;i++){
       for(int s=1;s<=(n-i);s++)
       cout<<" ";
       for(int j=1;j<=i;j++){
           if(i!=n){
               if(j == 1)
               cout<<"1";
               else if(j == i)
               cout<<i;
               else
               cout<<" ";
           }
           else{
               cout<<j;
           }
       }
       cout<<endl;
    }
    
    
    
    
return 0;

}