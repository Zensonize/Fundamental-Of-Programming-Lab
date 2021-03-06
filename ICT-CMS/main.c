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
void credit(){
    system("cls");
    printf("/* This project was created by */\n\n");                        Sleep(500);
    printf("\tKrittamet Kiattikulwattana 	| 6088063   (Leader)\n");       Sleep(500);
    printf("\tDujnapa Tanundet 		        | 6088105\n");                  Sleep(500);
    printf("\tThanakorn Pasangthien         | 6088109\n");                  Sleep(500);
    printf("\tSunat Praphanwong 		    | 6088130\n");                  Sleep(500);
    printf("\tArada Puengmongkolchaikit	    | 6088133\n\n");                Sleep(500);
    printf("<-| Getting Started |->\n\n");                                  Sleep(500);
    printf("\t1. Extract File and pasted in C:/Zensonize\n");               Sleep(500);
    printf("\t2. Run Zensonize.exe\n");                                     Sleep(500);
    printf("\t3. Please use numpad to select and ESC to exit\n");           Sleep(500);
    printf("\t4. Have fun and GIVE US A+\n\n");                             Sleep(500);
    printf("<-| Further information |->\n\n");                              Sleep(500);
    printf("\tGo to https://github.com/Zensonize/Fundamental-Of-Programming-Lab/tree/master/ICT-CMS\n\n");Sleep(500);
    printf("<-| FEATURES |->\n\n");                                         Sleep(500);
    printf("\t- Realtime Search\n");                                        Sleep(500);
    printf("\t- Admin can give Admin Privilege\n");                         Sleep(500);
    printf("\t- INPUT limitations to prevent ERROR\n\n");                   Sleep(500);
    printf("<-| TO DO |->\n\n");                                            Sleep(500);
    printf("\t- Sort Data\n");                                              Sleep(500);
    printf("\t- Better UI\n");                                              Sleep(500);
    getch();
}
void Header(char first[50],char last[50],int mode,char ADMIN,char loggedin){
    printf("============================================================================================================================\n");
    ADMIN == 'Y' ? printf("@ADMIN ICT-CMS | ") : printf("ICT-CMS | ");
    switch (mode){
        case 0: printf("HOME"); break;
        case 1: printf("Login"); break;
        case 2: printf("Register"); break;
        case 3: printf("Advance Search"); break;
        case 4: printf("Edit info"); break;
        case 5: printf("HOME"); break;
        case 6: printf("Delete User"); break;
        case 7: printf("Give Admin Access"); break;
    }
    printf("\t\t\t\t\t\t\t");
    if(loggedin == 'N') printf("\n"); else printf("%s %s\n",first,last);
    printf("============================================================================================================================\n\n");
}

void Redirecting(int duration){
    int timer1,timer2;
    printf("\nRedirecting");
    for(timer1 = duration; timer1 > 0; timer1--){
        printf(" %d",timer1);
        Sleep(200);
        for(timer2 = 3;timer2>0;timer2--){
            printf(".");
            Sleep(200);
        }
        printf(" "); Sleep(200);
    }
}

void outputfile(struct contact out[100],int *numuser){
    int i,j;
    FILE *userdata;
    userdata = fopen("D:\\Repositories\\Fundamental-Of-Programming-Lab\\Project\\udata.txt","w");
    fprintf(userdata,"%d,\n",*numuser);
    for(i=0;i<*numuser;i++){
        fprintf(userdata,"\n");
        fprintf(userdata,"%s,",out[i].id);
        fprintf(userdata,"%s,",out[i].first);
        fprintf(userdata,"%s,",out[i].last);
        fprintf(userdata,"%s,",out[i].phone);
        fprintf(userdata,"%s,",out[i].email);
        fprintf(userdata,"%s,",out[i].pwd);
        fprintf(userdata,"%d,",i);
    }
    printf("[SYSTEM] Updated!\n");
    fclose(userdata);
}

void readfile(struct contact read[100],int *numuser){
    FILE *userdata;
    int i;
    if ((userdata = fopen("D:\\Repositories\\Fundamental-Of-Programming-Lab.old\\Project\\udata.txt","r")) != NULL){
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
    system("cls");
    printf("\t\t\t----------------------\n");
    printf("\t\t     |     TABLE OF USERS      |\n");
    printf("\t\t\t----------------------\n");
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
    printf("-------------------------------------------------------------------------------------------------\n");
}

void showdata(struct contact muict[100],int *position){
    printf("%2d  |"     ,muict[*position].idx);
    printf("   %7s   |" ,muict[*position].id);
    printf(" %s"        ,muict[*position].first);
    printf(" %-15s\t|"  ,muict[*position].last);
    printf("   %10s\t|" ,muict[*position].phone);
    printf("  %-25s\t|" ,muict[*position].email);
    printf("\n");
}

void show1data(struct contact user){
    printf("ID: %7s   \n" ,user.id);
    printf("Name: %s %s\n",user.first,user.last);
    printf("Phone: %s\n" ,user.phone);
    printf("Email: %s\n" ,user.email);
    printf("\n");
}

int input_id(char id[8],char newu,char first[50],char last[50],char admin){
    int inpos = 0;
    char key_in;
    int setnull = 7;
    do{id[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        if(newu == 'N') Header(first,last,2,admin,'N');
        else if (newu == 'E') Header(first,last,4,admin,'Y'); else Header(first,last,1,admin,'N');
        newu == 'N' ? printf("Enter your ID: ") : printf("ID: ");
        printf("%s",id);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos == 7) return 1;
        if(key_in == 27) return 99;
        if(key_in == 8){
            id[--inpos] = '\0';
            if(inpos <=0) inpos = 0;
        }
        else if(isdigit(key_in) && inpos < 7)   id[inpos++] = key_in;
    }while(1);
}

int input_firstlast(char name[50],char FL,char newu,char first[50],char last[50],char admin){
    int inpos = 0,iscap = 1,isnoncap = 1,noncap_pos = 99,i;
    char key_in;
    int setnull = 49;
    do{name[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        if(newu == 'E') Header(first,last,4,admin,'Y');
        else Header(first,last,2,admin,'N');
        FL == 'F' ? printf("Enter your First Name: ") : printf("Enter your Last Name: ");
        printf("%s",name);
        key_in = getch();
        printf("\n");
        //printf("\t\t\t\tPOS:%d\tiscap:%d\tisnoncap:%d\tnoncap_pos:%d\n",inpos,iscap,isnoncap,noncap_pos);
        if(key_in == 13 && inpos >= 3 && iscap && isnoncap ) return 1;
        if(key_in == 27) return 99;
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

int input_phone(char phone[11],char newu,char first[50],char last[50],char admin){
    int inpos = 0, iszero = 1;
    char key_in;
    int setnull = 10;
    do{phone[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        newu == 'E' ? Header(first,last,4,admin,'Y') : Header(first,last,2,admin,'N') ;
        printf("Enter your Phone number: ");
        printf("%s",phone);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos == 10 && iszero) return 1;
        if(key_in == 27) return 99;
        if(phone[0] == '0') iszero = 1; else iszero = 0;
        if(key_in == 8){
            phone[--inpos] = '\0';
            if(inpos <=0) inpos = 0;
        }
        else if(isdigit(key_in) && inpos < 10)   phone[inpos++] = key_in;
    }while(1);
}

int input_email(char email[50],char newu,char first[50],char last[50],char admin){
    int inpos = 0, isconta = 0,a_pos = 99,iscontd = 0,d_pos = 99;
    char key_in;
    int setnull = 49;
    do{email[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        newu == 'E' ? Header(first,last,4,admin,'Y') : Header(first,last,2,admin,'N') ;
        printf("Enter your Email: ");
        printf("%s",email);
        if(isconta == 0 || iscontd == 0) printf("\n\n\n\n\n[WARNING] Invalid Email");
        //printf("\t\t\t\tPOS:%d\tconta:%d\ta_pos%d\tcontd:%d\td_pos:%d\n",inpos,isconta,a_pos,iscontd,d_pos);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos >= 7 && isconta && iscontd) return 1;
        if(key_in == 27) return 99;
        if(key_in == 8){
            email[--inpos] = '\0';
            if(iscontd && inpos <= d_pos){iscontd = 0;d_pos = 99;}
            if(isconta && inpos <= a_pos){isconta = 0;a_pos = 99;}
            if(inpos <=0) inpos = 0;
        }
        else if(key_in >= 33 && key_in <= 126 && inpos < 49){
            if(inpos < 50) {
                if(key_in == '@'){isconta = 1; a_pos = inpos;}
                if(isconta == 1 && key_in == '.'){
                    if(a_pos+1 != inpos) {iscontd = 1; d_pos = inpos;}
                }
                email[inpos++] = key_in;
            }
        }
        else if(key_in == '@'){
            if(key_in == '@'){isconta = 1; a_pos = inpos;}
                if(isconta == 1 && key_in == '.'){
                    if(a_pos+1 != inpos) {iscontd = 1; d_pos = inpos;}
                }
                email[inpos++] = key_in;
        }
    }while(1);
}

int input_pwd(char pwd[30],char newu,char first[50],char last[50],char admin){
    char pwdchk[30];
    int inpos = 0,inpos2 = 0;
    char key_in,retry;
    int setnull = 29;
    do{pwd[setnull] = '\0'; pwdchk[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        if(newu == 'Y') Header(first,last,2,admin,'N');
        else if(newu == 'E')Header(first,last,4,admin,'Y');
        else Header(first,last,1,admin,'N');
        printf("Enter your Password: ");
        printf("%s",pwd);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos >= 8) break;
        if(key_in == 27) return 99;
        if(key_in == 8){
            pwd[--inpos] = '\0';
            if(inpos <=0) inpos = 0;
        }
        else if(isalnum(key_in) && inpos < 30)   pwd[inpos++] = key_in;
    }while(1);

    do{
        system("cls");
        if(newu == 'Y') Header(pwd,pwd,2,admin,'N');
        else if(newu == 'E')Header(pwd,pwd,4,admin,'Y');
        else Header(pwd,pwd,1,admin,'N');
        printf("Confirm Password: ");
        printf("%s",pwdchk);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos2 >= 8) break;
        if(key_in == 27) return 99;
        if(key_in == 8){
            pwdchk[--inpos2] = '\0';
            if(inpos2 <=0) inpos2 = 0;
        }
        else if(isalnum(key_in) && inpos2 < 30)   pwdchk[inpos2++] = key_in;
    }while(1);

    if(strcmp(pwd,pwdchk) != 0){
        printf("RETRY? (Y/N)");
        do{retry = getch(); if(retry == 'Y' || retry == 'N')break;}while(1);
        if (retry == 'Y') input_pwd(pwd,newu,first,last,admin);
        else return 99;
    }
    else return 1;
}

int input_finalize(struct contact muict[100],struct contact newdata,int *numuser,int *position,char mode){
    if(mode == 'N'){
        strcpy(muict[*numuser].id    , newdata.id);
        strcpy(muict[*numuser].first , newdata.first);
        strcpy(muict[*numuser].last  , newdata.last);
        strcpy(muict[*numuser].phone , newdata.phone);
        strcpy(muict[*numuser].email , newdata.email);
        strcpy(muict[*numuser].pwd   , newdata.pwd);
        *numuser = *numuser + 1;
        listdata(muict,numuser);
        outputfile(muict,numuser);
    }
    else if(mode == 'U'){
        strcpy(muict[*position].id    , newdata.id);
        strcpy(muict[*position].first , newdata.first);
        strcpy(muict[*position].last  , newdata.last);
        strcpy(muict[*position].phone , newdata.phone);
        strcpy(muict[*position].email , newdata.email);
        strcpy(muict[*position].pwd   , newdata.pwd);
        listdata(muict,numuser);
        outputfile(muict,numuser);
    }
    return 1;
}

int duplicatecheck(struct contact muict[100],struct contact newdata,int *numuser){
    int ispresent = -1;
    int i;
    for(i=0;i<*numuser;i++){
        if(strcmp(muict[i].id,newdata.id) == 0) return i;
    }
    return ispresent;
}

void Registeration(struct contact muict[100],int *numuser){
    struct contact newdata;
    int step = 0;
    char conf;
    do{
        switch(step){
            case 0: step += input_id(newdata.id,'N',newdata.id,newdata.id,'N');                   break;
            case 1: step += input_firstlast(newdata.first,'F','Y',newdata.first,newdata.first,'N');     break;
            case 2: step += input_firstlast(newdata.last,'L','Y',newdata.last,newdata.last,'N');      break;
            case 3: step += input_phone(newdata.phone,'Y',newdata.phone,newdata.phone,'N');                 break;
            case 4: step += input_email(newdata.email,'Y',newdata.email,newdata.email,'N');                 break;
            case 5: step += input_pwd(newdata.pwd,'Y',newdata.pwd,newdata.pwd,'N');                     break;
            case 6: do{
                        system("cls");
                        Header(newdata.id,newdata.id,2,'N','N');
                        printf("Please check your info\n"); show1data(newdata);
                        printf("Confirmed? (Y/N)");
                        conf = getch();
                        if(conf == 'Y' || conf == 'N') break;
                    }while(1);
                    if(conf == 'Y') step++; else step = 0; break;
            case 7: if(duplicatecheck(muict,newdata,numuser) == -1)         step += input_finalize(muict,newdata,numuser,numuser,'N');
                    else {printf("\n\n\n[ERROR] Duplicated Data\n\t"); Redirecting(4);  step++;}
                    break;
        }
    }while(step <= 7);
}

void tableprint(){
    printf("\t\t\t---------------\n");
    printf("\t\t\t|TABLE OF USERS|\n");
    printf("\t\t\t---------------\n");
    printf("IDX |  Student ID |\t\tNAME\t\t|     PHONE  \t|\t    E-MAIL\t\t|\n");
    printf("-----------------------------------------------------");
    printf("--------------------------------------------\n");
    printf("\n");
}

void searchidphone(struct contact muict[100],char search[11],int *numuser, char mode,char first[50],char last[50],char admin){
    int setnull = 7,results = 0,inpos = 0,i;
    char key_in;
    do{search[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        Header(first,last,3,admin,'Y');
        results = 0;
        mode == 'P' ? printf("Search Phone: ") :printf("Search ID: ");
        printf("%s\n",search);
        tableprint();
        for(i=0;i<*numuser;i++){
            if(strstr(muict[i].id,search) != NULL && mode != 'P') {results++; showdata(muict,&i);}
            else if(strstr(muict[i].phone,search) != NULL && mode == 'P')  {results++; showdata(muict,&i);}
        }
        printf("RESULTS: %d\n",results);
        key_in = getch();
        if(key_in == 13 || key_in == 27) break;
        if(key_in == 8){   search[--inpos] = '\0';  if(inpos <=0) inpos = 0;}
        else if(isdigit(key_in) && inpos < 7 && mode != 'P')   search[inpos++] = key_in;
        else if(isdigit(key_in) && inpos < 9 && mode == 'P')   search[inpos++] = key_in;
    }while(1);
}

void searchnamemail(struct contact muict[100],char search[50], int *numuser, char mode,char first[50],char last[50],char admin){
    int setnull = 49,results = 0,inpos = 0,i;
    char key_in;
    do{search[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        Header(first,last,3,admin,'Y');
        results = 0;
        mode == 'N' ? printf("Search Name: ") :printf("Search Email: ");
        printf("%s\n",search);
        tableprint();
        for(i=0;i<*numuser;i++){
            if(mode == 'N'){if(strstr(muict[i].first,search) != NULL || strstr(muict[i].last,search) != NULL) {results++; showdata(muict,&i);}}
            else{if(strstr(muict[i].email,search) != NULL) {results++; showdata(muict,&i);}}
        }
        printf("RESULTS: %d\n",results);
        key_in = getch();
        if(key_in == 13 || key_in == 27) break;
        if(key_in == 8){   search[--inpos] = '\0';  if(inpos <=0) inpos = 0;}
        else if(key_in >= 33 && key_in <= 126 && inpos < 49)   search[inpos++] = key_in;
        else if(key_in == '@' || key_in == '.' && inpos < 49) search[inpos++] = key_in;
    }while(1);
}

void advancesearch(struct contact muict[100],int *numuser,char admin,char first[50],char last[50]){
    struct contact search;
    int searchptr = 1;
    char searchptr_temp;
    do{
        system("cls");
        Header(first,last,3,admin,'Y');
        /*printf("\t\t\t------------------------------------------\n");
        printf("\t\t\t|WELCOME to ICT-CMS Advance Search System|\n");
        printf("\t\t\t------------------------------------------\n");*/
        printf("\t\t");searchptr == 1 ? printf("-->\t[1] Search by ID\n")             : printf("\t [1] Search by ID\n");
        printf("\t\t");searchptr == 2 ? printf("-->\t[2] Search by Name\n")           : printf("\t [2] Search by Name\n");
        printf("\t\t");searchptr == 3 ? printf("-->\t[3] Search by Phone number\n")   : printf("\t [3] Search by Phone number\n");
        printf("\t\t");searchptr == 4 ? printf("-->\t[4] Search by Email\n")          : printf("\t [4] Search by Email\n");
        printf("\t\t");searchptr == 0 ? printf("-->\t[0] Back\n")                     : printf("\t [0] Back\n");
        while(!kbhit());
        searchptr_temp = getch();
        if(searchptr_temp == 13) break;
        if(searchptr_temp >= '0' && searchptr_temp <= '4'){
            searchptr = (int) searchptr_temp - 48;
        }
    }while(1);
    switch(searchptr){
        case 1: searchidphone(muict,search.id,numuser,'I',first,last,admin);         break;
        case 2: searchnamemail(muict,search.first,numuser,'N',first,last,admin);     break;
        case 3: searchidphone(muict,search.id,numuser,'P',first,last,admin);         break;
        case 4: searchnamemail(muict,search.email,numuser,'M',first,last,admin);     break;
    }
    if(searchptr != 0) advancesearch(muict,numuser,admin,first,last);
}

void editinfo_home(struct contact muict[100],int *numuser,int *userindex,char isadmin,char admf[50],char admlast[50]){
    struct contact me;
    int editmeptr = 1;
    int step = 0;
    char editmeptr_temp;
    do{
        system("cls");
        Header(admf,admlast,4,isadmin,'Y');
        printf("-----------------------------------------------------------\n");
        printf("|Profile\n");
        printf("|ID: %s\n",muict[*userindex].id);
        printf("|Name: %s %s\n",muict[*userindex].first,muict[*userindex].last);
        printf("|Phone: %s\n",muict[*userindex].phone);
        printf("|Email: %s\n",muict[*userindex].email);
        printf("-----------------------------------------------------------\n");
        editmeptr == 1 ? printf("-->\t[1] Edit ID\n")             : printf("\t [1] Edit ID\n");
        editmeptr == 2 ? printf("-->\t[2] Edit First name\n")     : printf("\t [2] Edit First name\n");
        editmeptr == 3 ? printf("-->\t[3] Edit Last name\n")      : printf("\t [3] Edit Last name\n");
        editmeptr == 4 ? printf("-->\t[4] Edit Phone number\n")   : printf("\t [4] Edit Phone number\n");
        editmeptr == 5 ? printf("-->\t[5] Edit Email\n")          : printf("\t [5] Edit Email\n");
        editmeptr == 6 ? printf("-->\t[6] Edit Password\n")       : printf("\t [6] Edit Password\n");
        editmeptr == 0 ? printf("-->\t[0] Back\n")                : printf("\t [0] Back\n");
        while(!kbhit());
        editmeptr_temp = getch();
        if(editmeptr_temp == 13) break;
        if(editmeptr_temp >= '0' && editmeptr_temp <= '6'){
            editmeptr = (int) editmeptr_temp - 48;
        }
    }while(1);
    if(editmeptr == 0) step = 99; else step = 0;
    do{
        switch(step){
            case 0:
                    strcpy(me.id    ,   muict[*userindex].id);
                    strcpy(me.first ,   muict[*userindex].first);
                    strcpy(me.last  ,   muict[*userindex].last);
                    strcpy(me.phone ,   muict[*userindex].phone);
                    strcpy(me.email ,   muict[*userindex].email);
                    strcpy(me.pwd   ,   muict[*userindex].pwd);        step = editmeptr;                break;
            case 1: step += input_id(me.id,'E',muict[*userindex].first,muict[*userindex].last,isadmin);                    if(step == 2) step = 8;             break;
            case 2: step += input_firstlast(me.first,'F','E',muict[*userindex].first,muict[*userindex].last,isadmin);      if(step == 3) step = 8;             break;
            case 3: step += input_firstlast(me.last,'L','E',muict[*userindex].first,muict[*userindex].last,isadmin);       if(step == 4) step = 8;             break;
            case 4: step += input_phone(me.phone,'E',muict[*userindex].first,muict[*userindex].last,isadmin);              if(step == 5) step = 8;             break;
            case 5: step += input_email(me.email,'E',muict[*userindex].first,muict[*userindex].last,isadmin);                  if(step == 6) step = 8;             break;
            case 6: step += input_pwd(me.pwd,'E',muict[*userindex].first,muict[*userindex].last,isadmin);                      if(step == 7) step = 8;             break;
            case 7: break; //update id stack
            case 8: step += input_finalize(muict,me,numuser,userindex,'U');
        }
    }while(step<9);
    if(editmeptr != 0) editinfo_home(muict,numuser,userindex,isadmin,admf,admlast);
}

void deleteu(struct contact muict[100],int *numuser,int *userindex){
    char confirm,i;
    do{
        printf("Confirm delete (Y/N)");
        confirm = getch();
        if(confirm == 'Y' || confirm == 'N') break;
    }while(1);
    if(confirm == 'Y'){
        for(i=*userindex;i<*numuser;i++){
             muict[i] = muict[i+1];
        }
        *numuser = *numuser-1;
        outputfile(muict,numuser);
    }
}

void edituserinfo(struct contact muict[100],int *numuser,char mode,int *userindex){
    int setnull = 7,results = 0,inpos = 0,i,resultpos;
    char key_in,search[8];
    do{search[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        if(mode == 'E') Header(muict[*userindex].first,muict[*userindex].last,4,'Y','Y');
        else if(mode == 'D') Header(muict[*userindex].first,muict[*userindex].last,6,'Y','Y');
        else Header(muict[*userindex].first,muict[*userindex].last,7,'Y','Y');
        results = 0;
        printf("Enter ID: ");
        printf("%s\n",search);
        tableprint();
        for(i=0;i<*numuser;i++){
            if(strstr(muict[i].id,search) != NULL) {results++; showdata(muict,&i); resultpos = i;}
        }
        printf("RESULTS: %d\n",results);
        key_in = getch();
        if(key_in == 13 && inpos == 7) break;
        if(key_in == 27){   resultpos = -1; break;}
        if(key_in == 8 ){   search[--inpos] = '\0';  if(inpos <=0) inpos = 0;}
        else if(isdigit(key_in) && inpos < 7)   search[inpos++] = key_in;
    }while(1);
    if(resultpos != -1 && results != 0 && mode == 'E'){
        editinfo_home(muict,numuser,&resultpos,'Y',muict[*userindex].first,muict[*userindex].last);
    }
    else if(resultpos != -1 && results != 0 && mode == 'D'){
        deleteu(muict,numuser,&resultpos);
    }
    else if(resultpos != -1 && results != 0 && mode == 'G'){
        struct contact admin;
        int step;
            strcpy(admin.id    ,   muict[resultpos].id);
            strcpy(admin.first ,   muict[resultpos].first);
            strcpy(admin.last  ,   muict[resultpos].last);
            strcpy(admin.phone ,   muict[resultpos].phone);
            strcpy(admin.email ,   muict[resultpos].email);
            strcpy(admin.pwd   ,   muict[resultpos].pwd);
            admin.id[0] = '0'; admin.id[1] = '0';
            if(duplicatecheck(muict,admin,numuser) == -1)         step = input_finalize(muict,admin,numuser,numuser,'N');
                    else {printf("Error Duplicated Data"); Redirecting(4);}
    }
}

void admin_home(struct contact muict[100],int *numuser,int *userindex){
    int admptr = 1;
    char admptr_temp;
    do{
        system("cls");
        Header(muict[*userindex].first,muict[*userindex].last,5,'Y','Y');
        printf("\t\t");admptr == 1 ? printf("-->\t[1] Edit User's Contact\n")    : printf("\t [1] Edit User's Contact\n");
        printf("\t\t");admptr == 2 ? printf("-->\t[2] Show all contact\n")       : printf("\t [2] Show all contact\n");
        printf("\t\t");admptr == 3 ? printf("-->\t[3] Search for a contact\n")   : printf("\t [3] Search for a contact\n");
        printf("\t\t");admptr == 4 ? printf("-->\t[4] Delete user's contact\n")  : printf("\t [4] Delete user's contact\n");
        printf("\t\t");admptr == 5 ? printf("-->\t[5] Give Admin privilege\n")   : printf("\t [5] Give Admin privilege\n");
        if(*userindex == 0){if(admptr == 6){printf("\t\t"); printf("-->\t[6] About this system\n");}else {printf("\t\t"); printf("\t [6] About this system\n");}}
        printf("\t\t");admptr == 0 ? printf("-->\t[0] exit\n")                   : printf("\t [0] exit\n");
        while(!kbhit());
        admptr_temp = getch();
        if(admptr_temp == 13) break;
        if(*userindex == 0){    if(admptr_temp >= '0' && admptr_temp <= '6'){admptr = (int) admptr_temp - 48;}}
        else {                  if(admptr_temp >= '0' && admptr_temp <= '5'){admptr = (int) admptr_temp - 48;}}
    }while(1);
    switch(admptr){
        case 1: edituserinfo(muict,numuser,'E',userindex);                            break;
        case 2: listdata(muict,numuser);    printf("Press any key to Continue\n");  getch();      break;
        case 3: advancesearch(muict,numuser,'Y',muict[*userindex].first,muict[*userindex].last);                               break;
        case 4: edituserinfo(muict,numuser,'D',userindex);                            break;
        case 5: edituserinfo(muict,numuser,'G',userindex);                            break;
        case 6: credit();                                                   break;
    }
    if(admptr != 0) admin_home(muict,numuser,userindex);
}

void user_home(struct contact muict[100],int *numuser,int *userindex){
    int userptr = 1;
    char userptr_temp;
    do{
        system("cls");
        Header(muict[*userindex].first,muict[*userindex].last,5,'N','Y');
        /*printf("\t\t\t-----------------------------------------\n");
        printf("\t\t\t|WELCOME to ICT-CMS %s %s|\n",muict[*userindex].first,muict[*userindex].last);
        printf("\t\t\t-----------------------------------------\n");*/
        printf("\t\t");userptr == 1 ? printf("-->\t[1] Edit my Contact\n")         : printf("\t [1] Edit my Contact\n");
        printf("\t\t");userptr == 2 ? printf("-->\t[2] Show all contact\n")        : printf("\t [2] Show all contact\n");
        printf("\t\t");userptr == 3 ? printf("-->\t[3] Search for a contact\n")    : printf("\t [3] Search for a contact\n");
        printf("\t\t");userptr == 0 ? printf("-->\t[0] exit\n")                    : printf("\t [0] exit\n");
        while(!kbhit());
        userptr_temp = getch();
        if(userptr_temp == 13) break;
        if(userptr_temp >= '0' && userptr_temp <= '3'){
            userptr = (int) userptr_temp - 48;
        }
    }while(1);
    switch(userptr){
        case 1: editinfo_home(muict,numuser,userindex,'N',muict[*userindex].first,muict[*userindex].last);                     break;
        case 2: listdata(muict,numuser); printf("Press any key to Continue\n"); getch();       break;
        case 3: advancesearch(muict,numuser,'N',muict[*userindex].first,muict[*userindex].last);                               break;
    }
    if(userptr != 0) user_home(muict,numuser,userindex);
}

int login_pwd(char pwd[30]){
    int inpos = 0;
    int setnull = 29;
    char key_in,pwdchk[30];
    do{pwd[setnull] = '\0'; pwdchk[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        Header(pwd,pwd,1,'N','N');
        printf("Password: ");
        printf("%s",pwd);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos >= 8) return 1;
        if(key_in == 27) return 99;
        if(key_in == 8){
            pwd[--inpos] = '\0';
            if(inpos <=0) inpos = 0;
        }
        else if(isalnum(key_in) && inpos < 30)   pwd[inpos++] = key_in;
    }while(1);
}

int login_check(struct contact muict[100],struct contact indata,int *numuser,char *roles){
    int isfound = 0,i;
    for(i=0;i<*numuser;i++){
        if(strcmp(muict[i].id,indata.id) == 0) {
            if(strcmp(muict[i].pwd,indata.pwd) == 0) {
                isfound = 1;
                if(muict[i].id[0] == '0' && muict[i].id[1] == '0') *roles = 'A';
                else *roles = 'U';
                return i;
            }
        }
    }
    if(isfound == 0) return -1;
}

void Login(struct contact muict[100],int *numuser){
    struct contact indata;
    char retry;
    int step = 0;
    int useridx;
    char roles;
    do{
        switch(step){
            case 0: step += input_id(indata.id,'L',indata.id,indata.id,'N'); break;
            case 1: step += login_pwd(indata.pwd);  break;
            case 2:
                step ++;
                useridx = login_check(muict,indata,numuser,&roles);
                break;
            case 3:
                if(useridx == -1){
                    printf("[ERROR] wrong Username or Password");
                    printf("Retry? (Y/N)");
                    do{retry = getch(); if(retry == 'Y' || retry == 'N')break;}while(1);
                    if(retry == 'Y') step = 0; else break;
                }
                else step++;
        }
    }while(step<4);
    if (useridx != -1){
        roles == 'A' ? admin_home(muict,numuser,&useridx): user_home(muict,numuser,&useridx);
    }
}

void home(struct contact muict[100],int *numuser){
    int homecursor = 1;
    char homecursor_tmp;
    do{
        system("cls");
        printf("=================================================================================================================\n");
        printf("\t |    IIIII   CCCCCC  TTTTT        CCCCCC   M       M     SSSSS\t|              \n");
        printf("\t |     I     C         T          C        MM     MM    S \t|              \n");
        printf("\t |    I     C         T   |===|  C        M M   M M      S\t|              \n");					
        printf("\t |   I     C         T          C        M  M M  M        S\t|              \n");
        printf("\t |IIIII   CCCCCC    T          CCCCCC   M   M   M  SSSSS\t|              \n");	
        printf("=================================================================================================================\n\n");
        printf("\t\t\t");homecursor == 1 ? printf("-->\t[1] Registeration\n")   : printf("\t [1] Registeration\n");
        printf("\t\t\t");homecursor == 2 ? printf("-->\t[2] Login\n")           : printf("\t [2] Login\n");
        printf("\t\t\t");homecursor == 0 ? printf("-->\t[0] Exit\n")            : printf("\t [0] Exit\n");
        while(!kbhit());
        homecursor_tmp = getch();
        if(homecursor_tmp == 13) break;
        if(homecursor_tmp >= '0' && homecursor_tmp <= '2'){
            homecursor = (int) homecursor_tmp - 48;
        }
    }while(1);
    if(homecursor == 1) {
        Registeration(muict,numuser);
        home(muict,numuser);
    }
    else if(homecursor == 2) {
        Login(muict,numuser);
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

//Branch Test2