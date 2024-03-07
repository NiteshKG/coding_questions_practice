/******************************************************************************
repeated and missing number
*******************************************************************************/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    unordered_map<int,int> m;
    cin>>n;
    int a[n];
    cout<<"Enter array \n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int c=a[1]-a[0];
    int p=0;
    for(int i=0;i<n;i++){
        p+=c;
        m[a[i]]++;
        if(a[i] != p)
        cout<<"missing number is : "<<p<<endl;
    }
    for(auto pair : m){
        if(pair.second > 1)
        cout<<"Repeated number is :"<<pair.first;
    }

    return 0;
}
