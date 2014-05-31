#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

long long nCr(long long n, long long r){
    if(r > n/2)     r = n-r;
    long long answer = 1;
    for(int a=1;a<=r;a++,n--){
        if(n%a==0)   answer*=n/a;
        else if (answer%a==0)   answer=(answer/a)*n;
        else    answer = (answer*n)/a;
    }
    return answer;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t>0){
        long long n,k;
        scanf("%lld%lld", &n, &k);
        n--;
        k--;
        long long answer = nCr(n,k);
        printf("%lld\n", answer);
        t--;
    }
    return 0;
}
