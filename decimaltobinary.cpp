/******************************************************************************
Decimal to Binary

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,a[10],i=0;
    cout<<"Enter a number to convert :\n";
    cin>>n;
     
    while(n>0){
        a[i] = n%2;
        n/=2;
        i++;
    }
    cout<<"Binary form of number is : ";
    for(i=i-1;i>=0;i--)
    cout<<a[i];
    


    return 0;
}
