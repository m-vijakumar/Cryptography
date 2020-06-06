#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int digits = 4;
int seed=1234;

long int nextRand(){
    long long int n=  seed*seed ;
    string s = to_string(n);
    // cout<<s.length()<<"  ";
    while (s.length() < digits * 2)
    {
        s ='0'+s;
    }
    // cout<< s<<"  ";
    int start = digits/2;
// cout<<"start"<<start<<"  ";
    int end = start+digits;
// cout<<"end"<<end<<"  ";
    seed = stoi(s.substr(start,digits));
return seed;
}

int main(){

    for(int i =0;i<20;i++){
        cout<<nextRand()<<endl;
    }
    return 0;
}