#include <string>
using namespace std;
int main()
{
    string s,x;
    cout<<"Enter string :\n";
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
          x="";
    if(!(s[i]>='0' && s[i]<='9') ){
        if(s[i+1]>='0' && s[i+1]<='9')
          x+=s[i+1];
        if(s[i+2]>='0' && s[i+2]<='9')
          x+=s[i+2];
          
         for(int j=1;j<=stoi(x);j++){
             cout<<s[i];
         }
    }
    
}
    


    return 0;
}