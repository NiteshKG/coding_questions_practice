/******************************************************************************
Bastin once had trouble finding the numbers in a string. The numbers are distributed in a string across various test cases.
There are various numbers in each test case you need to find the number in each test case. Each test case has various numbers in sequence.
You need to find only those numbers which do not contain 9.
For eg, if the string contains "hello this is alpha 5051 and 9475".
You will extract 5051 and not 9475. You need only those numbers which are consecutive and you need to help him find the numbers.
Print the largest number.
Note: Use long long for storing the numbers from the string.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
   
    string s;
    cout<<"Enter string\n";
    getline(cin,s);
    int n=s.length();
    int n9=0;
    string res="",num="";
    for(int i=0;i<n;i++){
        n9=0;
        num="";
        while(s[i]>='0' && s[i]<='9'){
            if(s[i]=='9')
            n9=1;
            num = num+s[i];
            i++;
        }
        if(n9!=1 && num!=""){
            long long a=stoll(num);
            long long b=-1;
            if(res!="")
            b=stoll(res);
            if(a>b)
            res=num;
        }
    }
    
    if(res=="")
    cout<<"-1"<<endl;
    else
    cout<<res<<endl;

    return 0;
}
