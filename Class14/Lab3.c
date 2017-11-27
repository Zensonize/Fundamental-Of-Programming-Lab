#include <stdio.h>

struct contacts{
    char name[50];
    char phone[11];
    char mail[50];
};

int main() {
    struct contacts all[6] = {{'\0','\0','\0'},{'\0','\0','\0'},{'\0','\0','\0'},{'\0','\0','\0'},{'\0','\0','\0'},{'\0','\0','\0'},};
    char cont;
    int i;
    for(i=0;1;i++){
        printf("NAME: ");
        scanf("\n%[^\n]",all[i].name);
        printf("PHONE: ");
        scanf("%s",all[i].phone);
        printf("E-MAIL: ");
        scanf("%s",all[i].mail);
        do{
            printf("Continue? (Y/N)");
            scanf(" %c",&cont);
            if(cont == 'Y'||cont == 'y'||cont == 'N'||cont == 'n') break;
        }while(1);
        if(cont == 'N' || cont == 'n') break;
    }
    for(i=0;all[i].name[0] != '\0';i++){
        printf("<FRIEND %d>\n",i+1);
        printf("Name: %s\n",all[i].name);
        printf("Phone: %s\n",all[i].phone);
        printf("Email: %s\n\n",all[i].mail);
    }
}