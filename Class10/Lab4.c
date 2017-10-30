#include <stdio.h>
#include <string.h>

struct Student {
    int stdID;
    char stdName[60];
    char stdSurname[60];
    char Gender;
    int Age; 
};

struct Student myclass[5];

void listall(){
    int j;
    printf("| ID |\t  Name    |   Surname   | Gender | Age |\n");
    for(j=0;j<5;j++){
        printf("|  %d |  %-10s|  %-10s |   %c    | %d  |\n",myclass[j].stdID,myclass[j].stdName,myclass[j].stdSurname,myclass[j].Gender,myclass[j].Age);
    }
}

int main() {
    int i;

    for(i=0;i<5;i++){
        scanf("%d,",&myclass[i].stdID);
        scanf("%[^,],",myclass[i].stdName);
        scanf("%[^,],",myclass[i].stdSurname);
        scanf(" %c,",&myclass[i].Gender);
        scanf("%d,",&myclass[i].Age);
    }
    listall();
}