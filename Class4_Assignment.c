#include <stdio.h>
// ------------------ LAB1 ------------------
void Lab1(){
    char light;
    printf("Input light Signal: R / Y / G: ");
    scanf(" %c",&light);
    switch (light){
        case 'R': printf("stop"); break;
        case 'Y': printf("Slow down!"); break;
        case 'G': printf("Go!"); break;
        default : printf("Incorrect input");
    }
}
// ------------------ LAB2 ------------------
void Lab2(){
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
// ------------------ LAB3 ------------------
void Lab3(){
    double number;
    PRINT:printf("Enter a number:");
    scanf("%lf",&number);
    if(number < 0.0){
        printf("number is negative\n");
        goto PRINT;
    }
    else
        printf("number is positive\n");
}
// ----------------- Bonus1 -----------------
void Lab4(){
    char light;
    printf("Input light Signal: R / Y / G: ");
    scanf(" %c",&light);
    light=='R' ? printf("stop") : 
    light=='Y' ? printf("Slow down!") :
    light=='G' ? printf("Go!") : printf("Incorrect input");
}
// ----------------- Bonus2 -----------------
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
    }
}

void Lab5(){
    char operat;
    printf ("Select an operator either + or - or * or / \n");
    scanf(" %c",&operat);
    if(operat=='+' || operat =='-' || operat =='*' || operat =='/'){
        switchB(operat);
    }
    else printf("Error Wrong Operator");
}

// ----------------- SWLab -----------------
void switchLab(char Lab){
    printf ("Lab %c is running\n",Lab);
    printf ("------------------ START ------------------\n");
    switch(Lab){
        case '1':
            Lab1();
            break;
        case '2':
            Lab2();
            break;
        case '3':
            Lab3();
            break;
        case '4':
            Lab4();   
            break;
        case '5':
            Lab5();
            break;
        default : printf("Error Wrong Choice\n");
    }
}


int main(){
    char choice;
    printf("Choose Lab assignment to run : ");
    scanf(" %c",&choice);
    switchLab(choice);
    return 0;
}
