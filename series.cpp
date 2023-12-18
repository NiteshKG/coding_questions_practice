//1 6 13 22 33 46 series

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n,i,p=5;
    cout<<"Enter number:\n";
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        if(i==1){
            a[i]=1;
            
        }
        
        else{
         a[i] = a[i-1]+p;
             p+=2;
        }
        
    }
   for(int i=1;i<=n;i++)
   cout<<a[i]<<" ";
    
return 0;

}