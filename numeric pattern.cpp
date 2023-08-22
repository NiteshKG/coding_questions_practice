/******************************************************************************
123454321
1234 4321
123   321
12     21
1       1

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,i,j,k,s;
    cout<<"Enter n:\n";
    cin>>n;
    for(i=n;i>=1;i--){
        if(i==n){
            for(int j=1;j<=i;j++)
            cout<<j;
            for(k=i-1;k>=1;k--)
            cout<<k;
        }
        else{
            for(int j=1;j<=i;j++)
            cout<<j;
            for(s=1;s<=2*(n-i)-1;s++)
            cout<<" ";
            for(k=i;k>=1;k--)
            cout<<k;
        }
        
        cout<<endl;
    }


    return 0;
}