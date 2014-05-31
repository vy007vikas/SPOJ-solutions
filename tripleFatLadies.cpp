#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    long long answer;
    long long no;
    while(t>0){
        scanf("%lld", &no);
        answer = 192 + (250*(no-1));
        printf("%lld\n", answer); 
        t--;
    }
#ifdef DEBUG
    system("pause>nul");
#endif
    return 0;
}
