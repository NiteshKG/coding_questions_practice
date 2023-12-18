/******************************************************************************

    find total no. of words in a sentence or paragraph.

*******************************************************************************/
#include<iostream>
#include<unordered_map>
using namespace std;

void wordfrequency(string& input,unordered_map<string,int>& m){
    
    string word;
    for(char c: input)
    {
        if(c!=' ' && c!='.'){
         word+=c;
        }
        else{
            if(!word.empty()){
            m[word]++;
            word.clear();
            }
        }
    }
    if(!word.empty())
    m[word]++;
    
}
int main(){
    string input;
    unordered_map<string,int> m;
    cout<<"Enter string"<<endl;
    getline(cin,input);
  wordfrequency(input,m);
 // string search;
   // cout<<"Enter word to search"<<endl;
  // cin>>search;
  int sum=0;
  for(auto pair: m){
      sum+=pair.second;
  }
  cout<<sum;
   
    
return 0;

}