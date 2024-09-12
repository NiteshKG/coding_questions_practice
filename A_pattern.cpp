// A pattern


#include <bits/stdc++.h>
#include<vector>
using namespace std;



int main() {
    int n;
    cout<<"Enter value of n : \n";
    cin>>n;
    cout<<"\n\n";
    for(int i=1;i<=n;i++){
        for(int s=1;s<=(n-i);s++)
        cout<<" ";
        for(int p=1;p<=(2*i-1);p++){
            if(p==1 || p==(2*i-1) || i == (n+1)/2)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    
    
    
    
return 0;
}