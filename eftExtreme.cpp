#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

long long sum[10003];

int etf(int no){
    int answer = no;
    int temp = no;
    if(no%2==0){
        answer = answer - (answer/2);
        while(no%2==0)      no=no/2;
    }
    for(int a=3;a<=sqrt(temp);a+=2){
        if(no%a==0){
            answer-=(answer/a);
            while(no%a==0)      no=no/a;
        }
    }
    if(temp==1)     answer = 1;
    if(no>1)    answer-=(answer/no);
    return answer;
}

int main(){
    sum[0] = 0;
    for(int a=1;a<10001;a++){
        sum[a] = etf(a) + sum[a-1];
    }
    int t;
    scanf("%d", &t);
    int no;
    long long answer;
    while(t>0){
        scanf("%d", &no);
        printf("%lld\n", sum[no]*sum[no]);
        t--;
    }
    return 0;
}
