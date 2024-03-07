/******************************************************************************
M pattern code
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i>=2 && i<=(n/2)){
            cout<<"*";
            for(int j=1;j<=i-2;j++)
            cout<<" ";
            cout<<"*";
            for(int k=1;k<=n-2-(2*(i-1));k++)
            cout<<" ";
            cout<<"*";
            for(int j=1;j<=i-2;j++)
            cout<<" ";
            cout<<"*";
        }
        else if(i == (n/2)+1){
            if(n%2 == 1){
            cout<<"*";
            for(int j=1;j<=i-2;j++)
            cout<<" ";
            cout<<"*";
            for(int j=1;j<=i-2;j++)
            cout<<" ";
            cout<<"*";
            }
            else{
            cout<<"*";
            for(int j=1;j<=n-2;j++)
            cout<<" ";
            cout<<"*";
            }
           
        }
        else{
            cout<<"*";
            for(int j=1;j<=n-2;j++)
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
