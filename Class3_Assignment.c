#include <stdio.h>

double MTK (double miles) {
    double kilo2;
    kilo2 = miles*(5.0/8.0);
    return kilo2;
}

double KTM (double kilo) {
    double miles2;
    miles2 = kilo*(8.0/5.0);
    return miles2;
}

void Lab1 () {
    char choose;
    double dist;
    scanf(" %lf %c",&dist,&choose);
    switch (choose){
        case 'k': 
            printf("%.2f Kilometers = %5.2f Miles",dist,KTM(dist));
            break;
        case 'm':
            printf("%.2f Miles = %5.2f Kilometers",dist,MTK(dist));
            break;
        default : printf("Wrong Choice"); break;
    }
}

/* ++++++++++++++++++++++++++++ Lab1 ++++++++++++++++++++++++++++ */

void Listdrink() {
    printf ("Orange Juice  : 20 Baht\n");
    printf ("Grape Juice   : 21 Baht\n");
    printf ("Coconut juice : 22 Baht\n");
    printf ("Iced tea      : 18 Baht\n");
    printf ("Select Yor Drink: ");
}

void Lab2(){
    char choose;
    int money;
    Listdrink();
    scanf (" %c",&choose);
    printf ("Insert your money : ");
    scanf (" %d",&money);
    switch (choose){
        case 'O': 
            if(money>=20) {
                printf("Here is your Orange Juice\nYour change is %d Baht",(money-20));
            }
            else printf("Not enough money");
            break;
        case 'G':
            if(money>=21) {
                printf("Here is your Grape Juice\nYour change is %d Baht",(money-21));
            }
            else printf("Not enough money");
            break;
        case 'C':
            if(money>=22) {
                printf("Here is your Coconut juice\nYour change is %d Baht",(money-22));
            }
            else printf("Not enough money");
            break;
        case 'I':
            if(money>=18) {
                printf("Here is your Iced tea\nYour change is %d Baht",(money-18));
            }
            else printf("Not enough money");
            break;
        default : printf("Wrong Choice"); break;
    }
}

/* ++++++++++++++++++++++++++++ Lab2 ++++++++++++++++++++++++++++ */

void Lab3() {
    printf("Insert Score <Quiz> <Mid-term> <Final> :");
    int i,sum=0,score, cond=1;
    for (i=0;i<3;i++){
        scanf(" %d",&score);
        sum=sum+score;
        if (score < 0) {
            printf("Invalid Score");
            cond=0;
            break;
        }
        else if(i==0 && score>30) {
            printf("The Quiz score should less than or equal to 30");
            cond=0;
            break;
        }
        else if(i==1 && score>35) {
            printf("The Mid-term score should less than or equal to 35");
            cond=0;
            break;
        }
        else if(i==2 && score>35) {
            printf("The Final score should less than or equal to 35");
            cond=0;
            break;
        }
    }
    if(cond == 1){
        if(sum>=90) printf("A");
        else if(sum>=80) printf("B");
        else if(sum>=70) printf("C");
        else if(sum>=60) printf("D");
        else printf("F");
    }
}

/* ++++++++++++++++++++++++++++ Lab2 ++++++++++++++++++++++++++++ */

int isvalid(int m){
    if(m%100 == 0) return 1;
    else return 2;
}

void givebank(int m){
    int G=0,P=0,R=0,initial;
    initial=m;
    while(m>=1000){
        G++;
        m-=1000;
    }
    while(m>=500){
        P++;
        m-=500;
    }
    while(m>=100){
        R++;
        m-=100;
    }
    printf("here is your %d  Baht| 1000: %d | 500: %d | 100: %d |",initial,G,P,R);
}

void Bonus() {
    int money;
    printf("Input Desired money : ");
    scanf(" %d",&money);
    if(isvalid(money)==1){
        givebank(money);
    }
    else printf("Invalid amount");
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
        default : printf("Error Wrong Choice\n");
    }
}

int main() {
    char choice;
    choice = getchar();
    doswitch(choice);
    return 0;
}