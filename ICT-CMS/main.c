#include <stdio.h>
#include <stdlib.h>

struct contact{
    int idx;
    char id[8];
    char first[50];
    char last[50];
    char phone[11];
    char email[50];
    char pwd[30];
};

void readfile(struct contact read[100],int *numuser){
    FILE *userdata;
    int i;
    if ((userdata = fopen("D:\\Repositories\\Fundamental-Of-Programming-Lab\\Project\\udata.txt","r")) != NULL){
        printf("[SYSTEM] File ok!\n");
    }
    fscanf(userdata,"%d,\n",numuser);
    for(i=0;i<*numuser;i++){
        fscanf(userdata,"\n%8[^,],",read[i].id);
        fscanf(userdata,"%50[^,],",read[i].first);
        fscanf(userdata,"%50[^,],",read[i].last);
        fscanf(userdata,"%11[^,],",read[i].phone);
        fscanf(userdata,"%50[^,],",read[i].email);
        fscanf(userdata,"%30[^,],",read[i].pwd);
        fscanf(userdata,"%d,",&read[i].idx);
    }
    printf("[SYSTEM] loaded %d user(s)!\n",*numuser);
    fclose(userdata);
}

void listdata (struct contact read[100],int *numuser){
    int i;
    printf("\t\tTABLE OF USERS\n");
    printf("IDX |  Student ID |\t\tNAME\t\t|     PHONE  \t|\t    E-MAIL\t\t|\n");
    printf("-----------------------------------------------------");
    printf("--------------------------------------------\n");
    for(i=0;i<*numuser;i++){
        printf("%2d  |",read[i].idx);
        printf("   %7s   |",read[i].id);
        printf(" %s",read[i].first);
        printf(" %-15s\t|",read[i].last);
        printf("   %10s\t|",read[i].phone);
        printf("  %-25s\t|",read[i].email);
        printf("\n");
    }
}

int main()
{
    struct contact muict[100];
    int numuser;
    readfile(muict,&numuser);
    listdata(muict,&numuser);
    getchar();
}
