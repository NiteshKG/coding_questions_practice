/*
  Armstrong number
*/

#include<iostream>
#include<cmath>
using namespace std;

int countdigit(int num){
    int count = 0;
    while(num!=0){
        num/=10;
        count++;
    }
    return count;
}

bool armstrong(int num){
    int a = num;
    int sum = 0;
    int digit = countdigit(num);
    while(num!=0){
        int p = num%10;
        sum+=pow(p,digit);
        num/=10;
        
    }
    return (sum == a);
}

int main(){
    int n;
    cout<<"Enter number:\n";
    cin>>n;
    if(armstrong(n))
    cout<<n<<" is armstrong number.\n";
    else
    cout<<n<<" is not armstrong number.\n";
    
    
    
return 0;

}