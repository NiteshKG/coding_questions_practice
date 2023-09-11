/******************************************************************************

                             array of multiplication of all elements except the element of that index itself.

*******************************************************************************/

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n],answer[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
       answer[i]=1;
   }
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(j!=i)
           answer[i]*=a[j];
       }
   }
   for(int k=0;k<n;k++)
   cout<<answer[k]<<" ";
   
   
   

    return 0;
}
