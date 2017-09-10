#include <stdio.h>

int main() {
    int A,B,C;
    printf("Input Three numbers: ");
    scanf("%d %d %d",&A,&B,&C);
    switch (A<B){
        case 1: 
            switch(A<C){
                case 1: printf("%d",A); break;
                case 0: printf("%d",C); break;
            } 
            break;
        case 0:
            switch(B<C){
                case 1: printf("%d",B); break;
                case 0: printf("%d",C); break;
            } 
            break;

        
        
        //*case (A<B && A<C && B<C): printf("%d\n",A); break;
        //*case (A<B && A<C && C<B): printf("%d\n",A); break;
        //**case (B<A && B<C && A<C): printf("%d\n",B); break;
        //**case (B<A && B<C && C<A): printf("%d\n",B); break;
        //*case (C<A && C<B && A<B): printf("%d\n",C); break;
        //**case (C<A && C<B && B<A): printf("%d\n",C); break;*/
    }
}

/*
    A<B<C   |
    A<C<B   |             
    B<A<C   |
    B<C<A   |
    C<A<B   |
    C<B<A   |
*/