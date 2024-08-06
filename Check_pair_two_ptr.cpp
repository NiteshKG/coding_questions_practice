#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,B;
	    cin>>n>>B;
	    vector<int> A(n);
	    for(int i=0;i<n;i++)
	    cin>>A[i];
	    sort(A.begin(),A.end());
	    int i=0,j=0,match=0;
	    while(i<n && j<n){
	        int D= A[j] - A[i];
	        if(D == B){
	            match =1;
	            break;
	        }
	        else if(D > B){
	            i++;
	        }
	        else{
	            j++;
	        }
	    }
	    cout<<match<<endl;
	}

}
