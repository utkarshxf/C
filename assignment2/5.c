#include<stdio.h>

void printNGE(int *Arr, int n){
    printf("Element|NGE\n");
    for(int i=0;i<n;i++){
        for (int j = i; j <= n; j++)
        {
            if(Arr[i]<Arr[j]){
                printf("%d      | %d\n",Arr[i],Arr[j]); 
                break;
            }else if(j==n){
                printf("%d      |-1\n",Arr[i]);
            }
        }
    }
}

int main(){
    int Arr[50]={2,5,3,9,7},n=5;

    printNGE(Arr,n);

    return 0;
}