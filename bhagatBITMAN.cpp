#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int arr[65];
int marr[65];

void conv(long long no){
    long long temp = no;
    int a = 0;
    while(temp>0){
        arr[a] += temp%2;
        temp = temp/2;
        a++;
    }
}

long long myPower(long long a, long long p){
    if(p==0)    return 1;
    if(p==1)    return a;
    long long temp = myPower(a,p/2);
    temp*=temp;
    temp*=myPower(a,p%2);
    return temp;
}

int main(){
    int t;
    scanf("%d", &t);
    long long darr[t];
    for(int a=0;a<t;a++){
        scanf("%lld", &darr[a]);
        conv(darr[a]);
    }
    //Main algo
    for(int a=0;a<65;a++){
        if(arr[a]==0 || arr[a]==t){
            marr[a] = 0;
        } else {
            marr[a] = 1;
        }
    }
    //FInd answer
    long long answer = 0;
    for(int a=64;a>=0;a--){
        if(marr[a])     answer+=myPower(2,a);
    }
    printf("%lld\n", answer);
    return 0;
}
