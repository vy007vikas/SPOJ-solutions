#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t>0){
        int noOfBags, maxWt;
        scanf("%d%d", &maxWt, &noOfBags);
        int a;
        int inputArr[noOfBags][2];           //weight , value
        for(a=0;a<noOfBags;a++)     scanf("%d%d", &inputArr[a][0], &inputArr[a][1]);
        // ******************************  Knapsack algo start
        int arr[noOfBags+1][maxWt+1];
        //initialization
        for(a=0;a<=maxWt;a++){
            arr[0][a] = 0;
        }
        //Main part of the algo
        for(a=1;a<=noOfBags;a++){
            for(int w=0;w<=maxWt;w++){
                if(inputArr[a-1][0]<=w){
                    if(arr[a-1][w-inputArr[a-1][0]]+inputArr[a-1][1]>arr[a-1][w]){
                        arr[a][w] = arr[a-1][w-inputArr[a-1][0]]+inputArr[a-1][1];
                    } else {
                        arr[a][w] = arr[a-1][w];
                    }
                } else {
                    arr[a][w] = arr[a-1][w];
                }
            } 
        }
        // ******************************* Knapsack algo end
        printf("Hey stupid robber, you can get %d.\n", arr[noOfBags][maxWt]);
        t--;
    }
#ifdef DEBUG
    system("pause>nul");
#endif
    return 0;
}
