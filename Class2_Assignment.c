#include <stdio.h>
#include <math.h>

void Lab1(){
    int numA , numB;
    scanf("%d %d",&numA ,&numB);
    float sum,avg;
    sum = numA+numB;
    avg = (numA+numB)/2;
    printf("SUM is: %.2f\nAverage is: %f\n",sum,avg);
}

void Lab2() {
    double val;
    scanf("%lf",&val);
    if (val == (int)val) {
        printf("Fourth root of %.1lf = %lf\n",val,sqrt(val));
    }
    else printf("Fourth root of %lf = %lf\n",val,sqrt(val));
}

void Lab3() {
    double val;
    scanf("%lf",&val);
    printf("Fourth power of %lf = %lf\n",val,pow(val,4));
}

float Bonus_calc(int time){
    #define Pi 3.1416
    #define g 32.2
    float Ans;
    Ans = (time/(2*pow(Pi,2)))*g;
    return Ans;
}

void Bonus() {
    int time;
    scanf("%d",&time);
    printf("Length Needed is %f",Bonus_calc(time));
}
void doswitch(char choice){
    switch (choice){
        case '1':
            Lab1();
            break;
        case '2':
            Lab2();
            break;
        case '3':
            Lab3();
            break;
        case 'B':
            Bonus();
            break;
        default : printf("Error Wrong Choice");
    }
}

int main() {
	char choice;
    printf("Choose Lab assignment to run 1=Lab1 2=Lab2 3=Lab3 B=Bonus: ");
    scanf(" %c",&choice);
    doswitch(choice);
    return 0;
}
