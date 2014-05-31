#include<iostream>
#include<cstdio>
using namespace std;

int find_max(int n1, int n2, int n3){
    if(n1>=n2 && n1>=n3)      return n1;
    else if(n2>=n3 && n2>=n1)     return n2;
    else    return n3;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t>0){
        int r,c;
        scanf("%d%d", &r, &c);
        int arr[r][c];
        //Input of array
        for(int a=0;a<r;a++){
            for(int b=0;b<c;b++){
                scanf("%d", &arr[a][b]);
            }
        }
        //Main algo
        for(int a=r-2;a>=0;a--){
            for(int b=0;b<c;b++){
                if(b==0){
                    if(arr[a-1][b] > arr[a-1][b+1])     arr[a][b] = arr[a-1][b] + arr[a][b];
                    else    arr[a][b] = arr[a-1][b+1] + arr[a][b];
                } else if(b==c-1){
                    if(arr[a-1][b] > arr[a-1][b-1])     arr[a][b] = arr[a-1][b] + arr[a][b];
                    else    arr[a][b] = arr[a-1][b-1] + arr[a][b];
                } else {
                    arr[a][b] += find_max(arr[a-1][b-1],arr[a-1][b],arr[a-1][b+1]);
                }
            }
        }
        int answer = arr[0][0];
        for(int a=1;a<c;a++){
            if(arr[0][a]>answer)     answer = arr[0][a];
        }
        printf("%d\n", answer);
        t--;
    }
#ifdef DEBUG
    system("pause>nul");
#endif
    return 0;
}
