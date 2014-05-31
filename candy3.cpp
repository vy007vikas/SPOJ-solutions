#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
    long long t;
    char ch;
    scanf("%lld", &t);
    while(t>0){
        scanf("%c", &ch);
        long long no,temp;
        long long sum = 0;
        scanf("%lld", &no);
        for(long long a=0;a<no;a++){
            scanf("%lld", &temp);
            sum = (sum + (temp%no))%no;
        }
        if(sum==0)  printf("YES\n");
        else    printf("NO\n");
        t--;
    }
    return 0;
}
