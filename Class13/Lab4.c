#include <stdio.h>
#include <string.h>

int main() {
    char abc[100];
    int i;
    scanf("%[^\n]",abc);
    printf("length = %d\n",strlen(abc));
    for(i=0;i<strlen(abc);i++){
        if(abc[i] >= 'a' && abc[i] <= 'z'){
            abc[i] = abc[i] - 32;
        }
        printf("%c",abc[i]);
    }
}