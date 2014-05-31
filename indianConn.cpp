#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

bool doFind(long long k){
    //Function to count one in its binary representation
    int count = 0;
    while(k>0){
        count+=(k%2);
        k/=2;
    }
    if(count%2==0)      printf("Male\n");
    else    printf("Female\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t>0){
        long long n,k;
        scanf("%lld%lld", &n, &k);
        doFind(k-1);
        t--;
    }
    return 0;
}
