/******************************************************************************
no. of stones does shopkeeper have which is needed by customer
*******************************************************************************/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int sum=0;
    unordered_map<char,int> m;
    string shopkeeper;
    cin>>shopkeeper;
    string customer;
    cin>>customer;
    for(int i=0;shopkeeper[i]!='\0';i++)
    m[shopkeeper[i]]++;
    
    for(int i=0;customer[i]!='\0';i++){
        auto it = m.find(customer[i]);
        if(it!=m.end())
        sum+=it->second;
}

   cout<<sum;
    return 0;
}
