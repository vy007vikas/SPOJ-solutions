#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


int main(){
    int col;
    char arr[205];
    scanf("%d", &col);
    while(col!=0){
        scanf("%s", arr);
        int len = strlen(arr);
        char mainArr[len/col][col];
        //Making the array
        for(int a=0;a<len;a++){
            if((a/col)%2==0)  mainArr[a/col][a%col] = arr[a];
            else    mainArr[a/col][col-(a%col)-1] = arr[a];
        }
        for(int a=0;a<(col);a++){
            for(int b=0;b<(len/col);b++){
                printf("%c", mainArr[b][a]);
            }
        }
        printf("\n");
        scanf("%d", &col);
    }
    return 0;
}
