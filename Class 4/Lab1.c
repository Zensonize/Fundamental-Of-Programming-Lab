#include <stdio.h>

int main(){
    char light;
    printf("Input light Signal: R / Y / G");
    light=getchar();
    switch (light){
        case 'R': printf("stop"); break;
        case 'Y': printf("Slow down!"); break;
        case 'G': printf("Go!"); break;
        default : printf("Incorrect input");
    }
}