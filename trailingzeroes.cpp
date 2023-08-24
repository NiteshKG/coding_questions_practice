//count of trailing zeroes of a factorial of a number.

#include <iostream>

using namespace std;

int main()
{
    int n,ans=0;
    
    cout<<"Enter number : \n";
    cin>>n;
    int a=n/5;
    while((n/5)>=1){
        ans+=a;
        n=a;
        a=n/5;
    }
    cout<<ans;

    return 0;
}