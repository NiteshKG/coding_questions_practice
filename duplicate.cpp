/******************************************************************************

                          program to count duplicate element in an array.

*******************************************************************************/

#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;

void dup(vector<int>& arr){
    unordered_map<int,int> m;
    for(int num: arr)
      m[num]++;
    int p=0;
    for(auto pair: m){
        if(pair.second > 1)
        cout<<"Duplicate element is: "<<pair.first<<endl;
    }
}

int main()
{
    int n;
    
    cout<<"Enter size:\n";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    dup(a);

    return 0;
}
