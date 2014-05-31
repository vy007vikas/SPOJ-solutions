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
        int boys[no], girls[no];
        int a;
        for(a=0;a<no;a++)   scanf("%d", &boys[a]);
        for(a=0;a<no;a++)   scanf("%d", &girls[a]);
        sort(boys,boys+no);
        sort(girls,girls+no);
        int answer = 0;
        for(a=0;a<no;a++)   answer+=(boys[a]*girls[a]);
        printf("%d\n", answer);  
        t--;
    }
#ifdef DEBUG
    system("pause>nul");
#endif
    return 0;
}
