#include <stdio.h>
void Lab3(){
    double price[4] = {6.34, 8.92, 65.40, 36.99};
    int code[4] = {1267, 1300, 2401, 4482};
    int loop;
    printf("Part No.\t Price\n");
    for (loop = 0;loop<4;loop++){
        printf("T%d\t\t",code[loop]);
        if(price[loop]<10) printf(" ");
        printf("$%.2f\n",price[loop]);
    }
}

void Lab4(){
    int num1 = 5,num2 = 8;
    float sum,avg;
    sum = num1+num2;
    avg = (num1+num2)/2;
    printf("SUM is: %f\nAverage is: %f",sum,avg);
}

void Bonus_initial(){
    printf("The first letter of the alphabet is %c", 'a');
    printf("\nThe decimal code for this letter is %d", 'a');
    printf("\nThe code for an upper case %c is %d\n", 'A','A');
}

void Bonus_final(){
    int num;
    char name[6] = {'k','K','r','R','i','I'};
    for(num = 1;num<4;num++){
        printf("My letter#%d is %c\nThe decimal code for this letter is %d\nThe code for an uppercase %c is %d\n",num,name[2*(num-1)],name[2*(num-1)],name[2*(num-1)+1],name[2*(num-1)+1]);
    }
}

void doswitch(char choice){
    switch (choice){
        case '3':
            Lab3();
            break;
        case '4':
            Lab4();
            break;
        case 'b':
            Bonus_initial();
            break;
        case 'B':
            Bonus_initial();
            Bonus_final();
            break;
        default : printf("Error Wrong Choice");
    }
}
int main() {
    char choice;
    printf("Choose Lab assignment to run 3=Lab3 4=Lab4 B=Bonus: ");
    scanf(" %c",&choice);
    doswitch(choice);
    return 0;
}
