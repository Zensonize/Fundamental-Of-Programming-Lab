#include <stdio.h>
#include <string.h>

int main() {
    char abc[100];
    int a;
    scanf("%[^\n]",abc);
    for(a=strlen(abc)-1;a>=0;a--){
        printf("%c",abc[a]);
    }
}