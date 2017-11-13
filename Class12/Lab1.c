#include <stdio.h>
#include <string.h>

void print(char *test,int length){
    int i;
    for(i=0;i<length;i++){
        printf("%c",*(test+i));
    }
}
int main() {
    char samtest[] = "This is a sample";
    print(&samtest[0],strlen(samtest));
}