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

void input_firstlast(char name[50],char FL){
    int inpos = 0,iscap = 1,isnoncap = 1,noncap_pos = 99,i;
    char key_in;
    int setnull = 49;
    do{name[setnull] = '\0';}while(setnull--);
    do{
        FL == 'F' ? printf("Enter your First Name: ") : printf("Enter your Last Name: ");
        printf("%s",name);
        key_in = getch();
        printf("\n");
        //printf("\t\t\t\tPOS:%d\tiscap:%d\tisnoncap:%d\tnoncap_pos:%d\n",inpos,iscap,isnoncap,noncap_pos);
        if(key_in == 13 && inpos >= 3 && iscap && isnoncap ) break;
        if(key_in == 8){
            name[--inpos] = '\0';
            if(inpos <=0) inpos = 0;
            if(isnoncap == 0 && inpos <= noncap_pos) {isnoncap = 1; noncap_pos = 99;}
        }
        else if(isalpha(key_in) && inpos < 49){
            name[inpos++] = key_in;
            if(islower(name[0])) iscap = 0;else iscap = 1;
            if(inpos > 1 && isupper(key_in)){
                isnoncap = 0;
                noncap_pos = inpos-1;
            }
        }
    }while(1);
}

void input_phone(char phone[11]){
    int inpos = 0, iszero = 1;
    char key_in;
    int setnull = 10;
    do{phone[setnull] = '\0';}while(setnull--);
    do{
        printf("Enter your Phone number: ");
        printf("%s",phone);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos == 10 && iszero) break;
        if(phone[0] == '0') iszero = 1; else iszero = 0;
        if(key_in == 8){
            phone[--inpos] = '\0';
            if(inpos <=0) inpos = 0;
        }
        else if(isdigit(key_in) && inpos < 10)   phone[inpos++] = key_in;
    }while(1);
}

void input_email(char email[50]){
    int inpos = 0, isconta = 0,a_pos = 99,iscontd = 0,d_pos = 99;
    char key_in;
    int setnull = 49;
    do{email[setnull] = '\0';}while(setnull--);
    do{
        printf("Enter your Email: ");
        printf("%s",email);
        //printf("\t\t\t\tPOS:%d\tconta:%d\ta_pos%d\tcontd:%d\td_pos:%d\n",inpos,isconta,a_pos,iscontd,d_pos);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos >= 7 && isconta && iscontd) break;
        if(key_in == 8){
            
            email[--inpos] = '\0';
            if(iscontd && inpos <= d_pos){iscontd = 0;d_pos = 99;}
            if(isconta && inpos <= a_pos){isconta = 0;a_pos = 99;}
            if(inpos <=0) inpos = 0;
        }
        else if(isalnum(key_in) || key_in == '@' || key_in == '.'){
            if(inpos < 50) {
                if(key_in == '@'){isconta = 1; a_pos = inpos;}
                if(isconta == 1 && key_in == '.'){
                    if(a_pos+1 != inpos) {iscontd = 1; d_pos = inpos;}
                }
                email[inpos++] = key_in;
            }
        } 
            
    }while(1);
}

void Registeration(int *numuser){
    struct contact newdata;
    input_id(newdata.id);
    input_firstlast(newdata.first,'F');
    input_firstlast(newdata.last,'L');
    input_phone(newdata.phone);
    input_email(newdata.email);
}

void Login(){
    printf("Login!\n");
}

void home(struct contact muict[100],int *numuser){
    int homecursor = 1;
    char homecursor_tmp;
    do{
        printf("WELCOME to ICT-CMS\n");
        homecursor == 1 ? printf("-->\t[1] Registeration\n")   : printf("\t [1] Registeration\n");
        homecursor == 2 ? printf("-->\t[2] Login\n")           : printf("\t [2] Login\n");
        homecursor == 0 ? printf("-->\t[0] Exit\n")            : printf("\t [0] Exit\n");
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
