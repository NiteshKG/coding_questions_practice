#include<bits/stdc++.h>
using namespace std;

bool areAnagram(string a,string b){
    if(a.length() != b.length())
    return false;

    unordered_map<char,int> Map;

    for(int i=0;i<a.length();i++)
    Map[a[i]]++;

    for(int j=0;j<b.length();j++){

        if(Map.find(b[j]) != Map.end())
         Map[b[j]]-= 1;
         else
         return false;

    }
    for(auto items : Map){
        if(items.second != 0)
        return false;
    }
    return true;
}

int main(){
    string str1 = "anag";
    string str2 = "gaan";
    if(areAnagram(str1,str2))
    cout<<"Two strings are anagram"<<endl;
    else
    cout<<"Two strings are not anagram"<<endl;

    return 0;
}
 