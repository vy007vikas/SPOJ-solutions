#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
using std::map;

map <long long , long long > fact;
map <long long , long long > answer;

void boom(){
    fact[0] = 0;
    fact[1] = 1;
    answer[0] = 0;
    answer[1] = 1;
    for(long long a=2;a<10000002;a++){
        fact[a] = (a*fact[a-1])%109546051211;
        answer[a] = (fact[a]*answer[a-1])%109546051211;
    }
}

int main(){
    boom();
    long long no;
    scanf("%lld", &no);
    printf("%lld", answer[no]);
}
