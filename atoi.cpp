#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin>>s;
    int len = s.length(),i=0,sign=1;
    if(s.empty())
    return 0;
    while(i<len && s[i] == ' ')
    i++;
    if(i==len)
    return 0;
    if(s[i] == '-'){
        sign = 0;
        i++;
    }
    else if(s[i] == '+')
    i++;
    
    long int out = 0;
    while(s[i]>='0' && s[i] <= '9'){
        out = out*10;
        if(out <= INT_MIN || out >= INT_MAX)
        break;
        out = out + (s[i] - '0');
        i++;

    }
    
    if(sign == 0)
    out = -1*out;
    if(out<=INT_MIN)
    return INT_MIN;
    if(out>=INT_MAX)
    return INT_MAX;

    return out;
    
}