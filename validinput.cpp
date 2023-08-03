/******************************************************************************
We have to take input of exactly 10 digit number
and check if it is valid or not ,it is only considered valid if it contains only 0-9.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    long long int k;
    cout<<"Enter input : \n";
    cin>>k;
    int a,count=0,f=0;
    while(k!=0){
        a=k%10;
        if(a>=0 && a<=9){
            count++;
        }
        else{
            f=1;
           
            break;
        }
        k/=10;
    }
    if(count == 10 && f==0 && cin.eof()){
        cout<<"Input is correct";
    }
    else
    {
        cout<<"Invalid input";
    }

    return 0;
}
