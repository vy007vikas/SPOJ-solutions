#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t>0){
        int no;
        scanf("%d", &no);
        int answer;
        if(no%2==0)     answer = no/2;
        else    answer = (no+1)/2;
        printf("%d\n", answer);
        t--;
    }
    return 0;
}
