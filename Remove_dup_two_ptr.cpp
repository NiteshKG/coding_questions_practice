#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> removedublicates(vector<int> & nums){
    if(nums.size() == 0) return nums;
    
    int index=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i] != nums[index]){
            index++;
            nums[index] = nums[i];
        }
    }
    nums.resize(index+1);
    return nums;
    
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>A(n);
        for(int i=0;i<n;i++)
         cin>>A[i];
    sort(A.begin(),A.end());
    vector<int> ans = removedublicates(A);
    cout<<ans.size()<<endl;
    for(int num: ans){
        cout<<num<<" ";
    }
    cout<<"\n";
        
    }

}
