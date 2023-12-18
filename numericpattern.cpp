/******************************************************************************
      1
     212
    32123 ....... pattern

*******************************************************************************/
#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    int n,i,j;
    cout<<"Enter number:\n";
    cin>>n;
    for(i=5;i>=1;i--){
        for(int s=1;s<=(n-i);s++)
        cout<<" ";
        int p=i;
        for(j=1;j<=(2*i-1);j++){
            if(j<i){
            cout<<p;
            p--;
            }
            else{
                cout<<p;
                p++;
            }
            
        }
        cout<<endl;
    }
   
    
return 0;

}