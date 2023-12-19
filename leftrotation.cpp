//leftroation of an array by given number.
//In right rotation use the logic (i+k)%n.

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter size:\n";
    cin>>n;
    int a[n],temp[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k;
    cout<<"Enter rotation number:\n";
    cin>>k;
    for(int i=0;i<n;i++){
        temp[(i-k+n)%n] = a[i];
    }
    for(int i=0;i<n;i++)
      a[i] = temp[i];
    
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
return 0;

}