/******************************************************************************
N pattern
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,s;
    cout<<"Enter line :\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            cout<<"*";
            for(int s=1;s<=(n-2);s++)
            cout<<" ";
            cout<<"*";
            cout<<endl;
        }
        else{
            cout<<"*";
            for(s=1;s<=(i-2);s++)
            cout<<" ";
            cout<<"*";
            for(int p=1;p<=(n-2-s);p++)
            cout<<" ";
            cout<<"*";
            cout<<endl;
        }
    }

    return 0;
}
