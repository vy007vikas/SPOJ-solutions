#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    int no,temp,answer;
    while(t>0){
        scanf("%d", &no);
        answer = no;
        temp = no;
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
        printf("%d\n", answer);
        t--;
    }
    return 0;
}
