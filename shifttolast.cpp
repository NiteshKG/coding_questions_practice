#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n,i,j=0,p;
    cout<<"Enter size of array:\n";
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"write a specific number to move to last from array:"<<endl;
    cin>>p;
    
   for(int i=0;i<n;i++){
        if(a[i]!=p)
        b[j++]=a[i];

    }
     for(j;j<n;j++)
     b[j]=p;
     
     for(int i=0;i<n;i++)
     cout<<b[i]<<"  ";
   
    
return 0;

}