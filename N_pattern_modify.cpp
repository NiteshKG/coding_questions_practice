// N pattern

#include <bits/stdc++.h> 
using namespace std;



int main() {
    int n;
    cout<<"Enter value of n : \n";
    cin>>n;
    cout<<"\n\n";
    
    for(int i=1;i<=n;i++){
       // for(int s=1;s<=(n-i);s++)
      
         
             for(int p=1;p<=n;p++){
            if(p == 1 || p==n || p==i )
            cout<<"*";
            else
            cout<<" ";
        
       
         }
           
        cout<<endl;
    }
    
   
    
    
    
return 0;
}