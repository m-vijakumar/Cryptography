#include<iostream>
#include<regex>
using namespace std;

string  key = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

string encryption(string text){
    
    char a='a';
    string s;
    for (long long int i = 0; i < text.length() ; i++)
    {
        if (text[i] >= 'a')
        {
            // cout<<(int)text[i]<<endl;
            int p = (int)text[i]-'a';
            s += key[p+26];
        }else
        {
            s += key[(int)text[i]-'A'];
        }

    }
    
    return s;
}

int main(){
regex r("[a-zA-Z]+") ;
    try
    {
        cout<<"Enter text \n";
    string s;
    cin>>s;

    if( regex_match(s ,r)){
        cout<<encryption(s);
    }else
    {
        throw "inavlid text";
    }

    
    }
    catch (const char* msg) {
     cerr << msg << endl;
   }
    
    
    
    return 0;
}