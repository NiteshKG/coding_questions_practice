/* pattern

*
 *
  *
 *
*
 *

*/

#include <iostream>
using namespace std;
int main()
{
    int n,p;
    cout<<"Enter value of n :";
    cin>>n;
    for(int i=1;i<=n;i++){
        p = i%4;
        if(p == 0)
          p=2;
        for(int j=1;j<=p-1;j++){
            cout<<" ";
        }
       
        cout<<"*";
       
       cout<<endl;
    }

    return 0;
}