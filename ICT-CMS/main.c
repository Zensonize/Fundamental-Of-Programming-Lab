#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>

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

void input_id(char id[8]){
    int inpos = 0;
    char key_in;
    int setnull = 7;
    do{id[setnull] = '\0';}while(setnull--);
    do{
        printf("Enter your ID: ");
        printf("%s",id);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos == 7) break;
        if(key_in == 8){
            id[--inpos] = '\0';
            if(inpos <=0) inpos = 0; 
        }
        else if(isdigit(key_in) && inpos < 7)   id[inpos++] = key_in;
    }while(1);
}

void input_first(char first[50]){
    int inpos = 0,iscap = 1,isnoncap = 1,noncap_pos,i;
    char key_in;
    int setnull = 49;
    do{first[setnull] = '\0';}while(setnull--);
    do{
        printf("Enter your First Name: ");
        printf("%s",first);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos >= 3 && iscap && isnoncap ) break;
        if(key_in == 8){
            first[--inpos] = '\0';
            if(inpos <=0) inpos = 0;
            if(isnoncap == 0 && inpos <= noncap_pos) isnoncap = 1;
        }
        else if(isalpha(key_in) && inpos < 49){
            first[inpos++] = key_in;
            if(islower(first[0])) iscap = 0;else iscap = 1;
            if(inpos>0 && isupper(key_in)){
                isnoncap = 0;
                noncap_pos = inpos-1;
            }
        }
    }while(1);
}

void Registeration(int *numuser){
    struct contact newdata;
    input_id(newdata.id);
    input_first(newdata.first);
}

void Login(){
    printf("Login!\n");
}

void home(struct contact muict[100],int *numuser){
    int homecursor = 1;
    char homecursor_tmp;
    do{
        printf("WELCOME to ICT-CMS\n");
        homecursor == 1 ? printf("-->\t[1] Registeration\n")   : printf("\t[1] Registeration\n");
        homecursor == 2 ? printf("-->\t[2] Login\n")           : printf("\t[2] Login\n");
        homecursor == 0 ? printf("-->\t[0] Exit\n")            : printf("\t[0] Exit\n");
        while(!kbhit());
        homecursor_tmp = getch();
        if(homecursor_tmp == 13) break;
        if(homecursor_tmp >= '0' && homecursor_tmp <= '2'){
            homecursor = (int) homecursor_tmp - 48;
        }
    }while(1);
    if(homecursor == 1) {
        Registeration(numuser);
        home(muict,numuser);
    }
    else if(homecursor == 2) {
        Login();
        home(muict,numuser);
    }    
}
int main()
{
    struct contact muict[100];
    int numuser;
    readfile(muict,&numuser);
    listdata(muict,&numuser);
    home(muict,&numuser);
}
