//we sort the array then find the sum of difference b/w two consecutive array element.

#include <iostream>
#include <algorithm>

using namespace std;
int penalty(int n, int a[]){
    int ans=0;
    sort(a,a+n);
    for(int i=1;i<n;i++){
        ans=ans+(a[i]-a[i-1]);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<penalty(n,a);

    return 0;
}