// J pattern

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
      
         
             for(int p=1;p<=n;p++){
            if((i>=((n+1)/2) && p==(n-2)/2) || i == 1 || p==(n+1)/2 || (i==n && p>=(n-2)/2 && p<=(n+1)/2) )
            cout<<"*";
            else
            cout<<" ";
        
       
         }
           
        cout<<endl;
    }
    
    
    
    
return 0;
}