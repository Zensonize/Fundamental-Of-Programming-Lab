//<b ? printf("a is less") : printf("a is greater");
#include <stdio.h>

int main() {
    char light;
    printf("Input light Signal: R / Y / G: ");
    light=getchar();
    light=='R' ? printf("stop") : 
    light=='Y' ? printf("Slow down!") :
    light=='G' ? printf("Go!") : printf("Incorrect input");
    return 0;
}