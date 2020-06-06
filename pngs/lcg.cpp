#include<iostream>
#include<math.h>
using namespace std;
    long long int seed=958736;
    long long int a=1664525;
    int c = 1013904223;
    int m= pow(2,32);

long long int nextRand(){
    seed = (a*seed + c)% m;
    return seed;
}
int main(){

    for(int i=0;i<20;i++){
        cout<<nextRand()%45<<endl;
    }
    return 0;
}