#include <stdio.h>
#include <string.h>

void swap(char abc[100],int length){
    int a;
    for(a=length-1;a>=0;a--){
        printf("%c",abc[a]);
    }
}

int main() {
    char abc[100];
    scanf("%[^\n]",abc);
    swap(abc,strlen(abc));
}