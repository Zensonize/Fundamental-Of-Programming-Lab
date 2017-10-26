#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[40]={'a','b','c','@'},string2[2] = {'@','.'};
    sscanf(" %[^,]"),&string;
    if(*strchr(string,40)=='@') printf("found");
    printf("%s",strpbrk(string,string2));
}