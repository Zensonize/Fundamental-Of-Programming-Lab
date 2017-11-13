#include <stdio.h>


void sort(int *num){
    int i,j,k,l;
    int temp;
    for (i=0;i<5;i++){
        for(k=i+1;k<5;k++){
            if(num[i]>num[k]){
                for(j=4;j>0;j--){
                    if(num[i]>num[j]){
                        temp = num[i];
                        num[i] = num[j];
                        num[j] = temp;
                    }
                }
            }
        }
    }
}


int main() {
    int i;
    int num[5];
    for(int i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    sort(num);

    for(int i=0;i<5;i++){
        printf("%d ",num[i]);
    }
}