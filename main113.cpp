#include<iostream>
#include<cstdio>

using namespace std;

long long power(int n,int m){
    if(m==0)    return 1;
    else{
        long long ans = power(n,m/2);
        ans *= ans;
        if(m%2==0)  return ans;
        else    return ans*n;
    }
}

int main(){
    int t , no;
    scanf("%d", &t);
    long long answer,temp;
    while(t>0){
        scanf("%d", &no);
        temp = power(3,no-2);
        if(no==0)   answer = 0;
        if(no==1)   answer = 3;
        else    answer = (13-(2*no))*temp;
        printf("%lld\n", answer);
        t--;
    }
    return 0;
}
