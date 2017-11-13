#include <stdio.h>
#include <string.h>

int main(){
    char abc[] = "When the going gets tough, the tough stay put!";
    char check[20];
    scanf("%[^\n]",check);
    int i;
    /*for(i=0;i<strlen(abc);i++){
        if(check[i] <= 'Z') check[i] += 22;
    }*/
    printf("%s",strstr(abc,check));
}