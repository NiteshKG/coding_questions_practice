// M pattern

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
            if(p == 1 || p==n ||  (i<=(n-1)/2 && i>1 && (p==i+1 || p==(n-i))))
            cout<<"*";
            else
            cout<<" ";
        
       
         }
           
        cout<<endl;
    }
    
   
    
    
    
return 0;
}