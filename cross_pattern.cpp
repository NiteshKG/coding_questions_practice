/* pattern
*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n :";
    cin>>n;
    int p=n/2,q=1;
    for(int i=1;i<=n;i++){
        if(i<=p){
       for(int s=1;s<=(i-1);s++)
       cout<<" ";
       cout<<"*";
       for(int j=1;j<=(n-2*i);j++)
       cout<<" ";
       cout<<"*"; 
        }
        else if(i == p+1){
            for(int s=1;s<=p;s++)
            cout<<" ";
            cout<<"*";
        }
        else{
            
            for(int s=1;s<=(n-i);s++)
            cout<<" ";
            cout<<"*";
            for(int j=1;j<=(2*q-1);j++)
            cout<<" ";
            cout<<"*";
            q++;
        }
       
        
     
       cout<<endl;
    }

    return 0;
}
