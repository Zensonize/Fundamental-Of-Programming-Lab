#include <stdio.h>
 
void swap(int *a,int *b){
    int spare;
    spare = *a;
    *a = *b;
    *b = spare;
}

void order(int *x,int *y, int *z){
    int trash;
    if(*x>=*y && *x>=*z){
        swap(x,z);
        if(*x > *y){
            swap(x,y);
        }
    }
    else if(*y>=*x && *y>=*z){
        swap(y,z);
        if(*x > *y){
            swap(x,y);
        }
    }
    else{
        if(*x > *y){
            swap(x,y);
        }
    }
    printf("%d,%d,%d",*x,*y,*z);
}
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    order(&a,&b,&c);
}