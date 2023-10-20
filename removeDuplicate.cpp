#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int a[n],count[1000] = {0};
    cout<<"Enter array";
    for(i=0;i<n;i++){
        cin>>a[i];
        count[a[i]]++;
    }
    for(j=0;j<n;j++){
       if(count[a[j]]>=1){
        cout<<a[j]<<" ";
        count[a[j]]=0;
       }
        
    }
    
    
    

    return 0;
}
