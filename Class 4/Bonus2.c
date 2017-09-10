#include <stdio.h>

void switchB (char op){
    double A,B;
    printf("enter two operands: ");
    scanf("%lf %lf",&A,&B);
    switch (op){
        case '+':
            printf("%.1f %c %.1f = %.1f",A,op,B,A+B);
            break;
        case '-':
            printf("%.1f %c %.1f = %.1f",A,op,B,A-B);
            break;
        case '*':
            printf("%.1f %c %.1f = %.1f",A,op,B,A*B);
            break;
        case '/':
            printf("%.1f %c %.1f = %.1f",A,op,B,A/B);
            break;
        default: printf("Error Wrong Operator");
    }
}

int main() {
    char operat;
    printf ("Select an operator either + or - or * or / \n");
    operat = getchar();
    switchB(operat);
}