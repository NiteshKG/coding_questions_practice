
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s;
   int i,alphabet[26]={0},result = 0;
   cout<<"Enter a sentence : \n";
   getline(cin, s);
   for(i=0;s[i]!='\0';i++){
       if(s[i]>='a' && s[i]<='z'){
           result+=!alphabet[s[i]-'a'];
           alphabet[s[i]-'a'] = 1;
           
       }
       else  if(s[i]>='A' && s[i]<='Z'){
           result+=!alphabet[s[i]-'A'];
           alphabet[s[i]-'A'] = 1;
           
       }
   }
   if(result==26)
   cout<<"Sentence is pangram";
   else
   cout<<"Sentence is not pangram";
   
   
   
   
    return 0;
}
