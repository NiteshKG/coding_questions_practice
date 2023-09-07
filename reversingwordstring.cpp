/******************************************************************************
Reverse words of string by keeping the correct word order of sentence.

*******************************************************************************/

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string res="",helper="";
   // reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            reverse(helper.begin(),helper.end());
            helper+=" ";
            res+=helper;
            helper="";
        }
        else{
            if(s[i]!='.')
        helper+=s[i];
        }
    }
    reverse(helper.begin(),helper.end());
            helper+=".";
            res+=helper;
    
    cout<<res;

    return 0;
}
