//Two pointer approach to move zero at the end of array.

#include <iostream>
using namespace std;

int main()
{
    int a[9];
    cout<<"Enter elements of array\n";
    for(int i=0;i<9;i++)
    cin>>a[i];
    int j=0,count=0;
    for (int i=0;i<9;i++){
        if(a[i]==0){
            count++;
        }
        else{
            a[j]=a[i];
            j++;
        }
    }
    for(int p=j;p<9;p++)
     a[p]=0;
     
     for(int i=0;i<9;i++)
    cout<<a[i]<<" ";

    return 0;
}