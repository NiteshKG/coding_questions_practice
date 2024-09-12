// B pattern


#include <bits/stdc++.h>
#include<vector>
using namespace std;



int main() {
    int n;
    cout<<"Enter value of n : \n";
    cin>>n;
    cout<<"\n\n";
    for(int i=1;i<=n;i++){
       // for(int s=1;s<=(n-i);s++)
       // cout<<" ";
        for(int p=1;p<=n;p++){
            if(i==1 || p== n || i == (n+1)/2 || p == 1 || i==n)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    
    
    
    
return 0;
}