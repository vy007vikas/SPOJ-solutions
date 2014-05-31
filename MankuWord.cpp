#include<cstdio>

void find(long long no){
    int temp;
    char ch;
    no--;
    char arr[1000];
    int count = 0;
    if(no==0)   printf("m");
    while(no>0){
        temp = no%5;
        if(temp==0)     ch='m';
        else if(temp==1)    ch='a';
        else if(temp==2)    ch='n';
        else if(temp==3)    ch='k';
        else if(temp==4)    ch='u';
        arr[count]=ch;
        no = no/5;
        count++;
        if(no==1){
            arr[count]='m';
            count++;
        }
        no--;
    }
    for(int a=count-1;a>=0;a--){
        printf("%c", arr[a]);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    long long no;
    while(t>0){
        scanf("%lld", &no);
        find(no);
        printf("\n");
        t--;
    }
    return 0;
}
