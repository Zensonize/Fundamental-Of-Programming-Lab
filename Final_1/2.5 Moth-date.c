#include <stdio.h>

int swmonth (int mont){
    switch(mont){
            case 1: printf("January"); break;
            case 2: printf("February"); break;
            case 3 : printf("March"); break;
            case 4 : printf("April"); break;
            case 5 : printf("May"); break;
            case 6 : printf("June"); break;
            case 7 : printf("July"); break;
            case 8 : printf("August"); break;
            case 9 : printf("September"); break;
            case 10 : printf("October"); break;
            case 11 : printf("November"); break;
            case 12 : printf("December"); break;    
    }
}

int swdate (int date){
    switch(date%10){
        case 1: printf("st"); break;
        case 2: printf("nd"); break;
        case 3: printf("rd");break;
        default: printf("th");
    }
}

int day(int mont){
    printf("Enter a day: ");
    if(mont == 2){
        int a;
        scanf("%d",&a);
        if(a >=1 && a <= 28){
            printf("Your date is: %d",a);
            if(a > 10 && a < 20) printf("th");
            else swdate(a);
            swmonth(mont);
            printf("\n");
        }
        else return -1;
    }

    else if (mont == 1 || mont == 3 || mont == 5 || mont == 7 || mont ==  8 || mont == 10 || mont == 12){
        int a;
        scanf("%d",&a);
        if(a >=1 && a <= 31){
            printf("Your date is: %d",a);
            if(a > 10 && a < 20) printf("th");
            else swdate(a);
            swmonth(mont);
            printf("\n");
        }
        else return -1;
    }

    else{
        int a;
        scanf("%d",&a);
        if(a >=1 && a <= 30){
            printf("Your date is: %d",a);
            if(a > 10 && a < 20) printf("th");
            else swdate(a);
            swmonth(mont);
            printf("\n");
        }
        else return -1;
    }
}


void month(){
    int mont;
    int iscorr = 0;
    
        printf("Enter a month: ");
        scanf("%d",&mont);
        if(mont >= 1 && mont <= 12){
            swmonth(mont);
            printf("\n");
            iscorr = day(mont);
        }
        if(iscorr == 0 || iscorr == -1) {
            printf("Error\n");
            month();
        }
    
}

int main () {
    month();
}