#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <windows.h>

struct user{
    char ID[7];
    int IDs;
    char First[50];
    char Last[50];
    char Phone[16];
    char Email[50];
    char PWD[30];
    int Index;
};

int user_val;
struct user Alluser[100];
struct user sort;

void Redirecting(){
    int timer1,timer2;
    printf("\nRedirecting");
    for(timer1 = 5; timer1 > 0; timer1--){
        printf(" %d",timer1);
        Sleep(200);
        for(timer2 = 4;timer2>0;timer2--){
            printf(".");
            Sleep(200);
        }
    }
}

void Sortudata(){
    int i,j,k;
    for (i=0;i<user_val;i++){
        for(k=i+1;k<user_val;k++){
            if(Alluser[i].IDs>Alluser[k].IDs){
                for(j=user_val-1;j>0;j--){
                    if(Alluser[i].IDs>Alluser[j].IDs){
                        sort = Alluser[i];
                        Alluser[i] = Alluser[j];
                        Alluser[j] = sort;
                        break;
                    }
                }
            }
        }
    }
}

// <--------------------------------------------------   DATA INPUT   ----------------------------------------------------------------------->

void Listall(){
    int i;
    system("cls");
    for(i=0;i<user_val;i++){
        printf("[USER %2d]\n",i);
        printf("\tID: %s\n",Alluser[i].ID);
        printf("\tFirstname: %s\n",Alluser[i].First);
        printf("\tLastname: %s\n",Alluser[i].Last);
        printf("\tPhone number: %s\n",Alluser[i].Phone);
        printf("\tEmail: %s\n",Alluser[i].Email);
        printf("\tPassword: %s\n\n",Alluser[i].PWD);
    }
}

// <--------------------------------------------------   DATA OUTPUT   ----------------------------------------------------------------------->

void Updatedata(int user_index){
    int i;
    
    FILE *nuserdata;
    nuserdata = fopen("D:\\Repositories\\Fundamental-Of-Programming-Lab\\Project\\udata.txt","w");
    fprintf(nuserdata,"%d,\n",user_index+1);
    for(i=0;i<=user_index;i++){
        fprintf(nuserdata,"\n%s,%s,%s,%s,%s,%s,%d,%d",Alluser[i].ID,Alluser[i].First,Alluser[i].Last,Alluser[i].Phone,Alluser[i].Email,Alluser[i].PWD,Alluser[i].IDs,i);
        //fprintf(nuserdata,"\n");
    }
    printf("[SYSTEM] Updated!\n");
    fclose(nuserdata);
    user_val++;
}

// <-----------------------------------------------   DELETE USER DATA    -------------------------------------------------------------------->
void Deludata(int pos){
    //postion is the index
    int deltmp;
    for(deltmp = pos;deltmp<user_val;deltmp++){
        Alluser[deltmp] = Alluser[deltmp+1];
    }
    user_val-=2;
    Updatedata(user_val);
}

// <-----------------------------------------------------   FILE I/O    ---------------------------------------------------------------------->

void Initialize(){
    FILE *userdata;
    int i;
    if ((userdata = fopen("D:\\Repositories\\Fundamental-Of-Programming-Lab\\Project\\udata.txt","r")) != NULL){
        printf("[SYSTEM] loaded!\n");
    }
    fscanf(userdata,"%d,\n",&user_val);
    for(i=0;i<user_val;i++){
        fscanf(userdata,"\n%8[^,],%49[^,],%49[^,],%15[^,],%49[^,],%29[^,],%d,%d",Alluser[i].ID,Alluser[i].First,Alluser[i].Last,Alluser[i].Phone,Alluser[i].Email,Alluser[i].PWD,&Alluser[i].IDs,&Alluser[i].Index);
    }
    printf("[SYSTEM] loaded %d user(s)!\n",user_val);
    fclose(userdata);
}

// <--------------------------------------------------   END of FILE I/O --------------------------------------------------------------------->

// <--------------------------------------------------   Login zone   --------------------------------------------------------------------->

void Registeration(){
    
}

void admin_edituser(){

}
// <------------------------------------------------- SEARCH ZONE   ----------------------------------------------------------------------->
void ListU(int index){
    printf("[USER %2d]\n",index);
    printf("\tID: %s\n",Alluser[index].ID);
    printf("\tFirstname: %s\n",Alluser[index].First);
    printf("\tLastname: %s\n",Alluser[index].Last);
    printf("\tPhone number: %s\n",Alluser[index].Phone);
    printf("\tEmail: %s\n",Alluser[index].Email);
    printf("\tPassword: %s\n\n",Alluser[index].PWD);
}

void doSearch(char searchchar[],char db[],int uindex){
    int pos_search = 0;
    int pos_text = 0;
    int len_search = strlen(searchchar)-2;
    int len_text = strlen(db);
    printf("Length search : %d\n",len_search);
    printf("Length dv : %d\n",len_text);
    printf("\n%c%c%c|%s ",searchchar[0],searchchar[1],searchchar[2],db);
    for (pos_text = 0; pos_text < len_text - len_search;++pos_text){
        if(db[pos_text] == searchchar[pos_search]){
            ++pos_search;
            if(pos_search == len_search){
                // match
                ListU(uindex);
                return;
            }
        }
        else{
            pos_text -=pos_search;
            pos_search = 0;
        }        
    }
}

void searchPhone(){

}

void searchEmail(){

}

void searchLast(){
    char searchLast[8];
    char search_temp;
    int printloop,searchLast_idx = 0;
    do{
        system("cls");
        printf("Search by Lastname\n");
        printf("Enter Last name: ");

    }while(0);
}

void searchFirst(){

}

void searchID(){
    char searchID[8];
    char search_temp;
    int printloop,searchID_idx = 0;
    int findloop;
    do{
        system("cls");
        printf("Search ID: ");
        for(printloop = 0;printloop<searchID_idx;printloop++){
            printf("%c",searchID[printloop]);
        }
        while(!kbhit());
        search_temp = getch();
        if(search_temp == 13 && searchID_idx >= 1) break;
        if(search_temp >= '0' && search_temp <= '9'){
            if(searchID_idx <7){
                searchID[searchID_idx] = search_temp;
                searchID_idx++;
            }
        }
        if(search_temp == 8) {
            searchID_idx--;
            if(searchID_idx <= 0) searchID_idx = 0;
        }
        
    }while(1);
    for(findloop = 0;findloop<user_val;findloop++){
        doSearch(searchID,Alluser[findloop].ID,findloop);
    }
}

void search_home(){
    int searchptr = 1;
    char searchptr_temp;
    do{
        system("cls");
        printf("WELCOME to ADMIN ICT-CMS\n");
        searchptr == 1 ? printf("-->\t[1] Search by ID\n")             : printf("\t[1] Search by ID\n");
        searchptr == 2 ? printf("-->\t[2] Search by First name\n")     : printf("\t[2] Search by First name\n"); 
        searchptr == 3 ? printf("-->\t[3] Search by Last name\n")      : printf("\t[3] Search by Last name\n"); 
        searchptr == 4 ? printf("-->\t[4] Search by Phone number\n")   : printf("\t[4] Search by Phone number\n"); 
        searchptr == 5 ? printf("-->\t[5] Search by Email\n")          : printf("\t[5] Search by Email\n"); 
        searchptr == 0 ? printf("-->\t[0] Back\n")                     : printf("\t[0] Back\n");
        while(!kbhit());
        searchptr_temp = getch();
        if(searchptr_temp == 13) break;
        if(searchptr_temp >= '0' && searchptr_temp <= '5'){
            searchptr = (int) searchptr_temp - 48;
        }
    }while(1);
    switch (searchptr){
        case 1:
            searchID();
            do{
            }while(getch() != 13);
            break;
        case 2:
            searchFirst();
            break;
        case 3:
            searchLast();
            break;
        case 4:
            searchPhone();
            break;
        case 5:
            searchEmail();
            break;
    }
}

void admin_home(){
    int admptr = 1;
    char admptr_temp;
    do{
        system("cls");
        printf("WELCOME to ADMIN ICT-CMS\n");
        admptr == 1 ? printf("-->\t[1] Edit User's Contact\n")    : printf("\t[1] Edit User's Contact\n");
        admptr == 2 ? printf("-->\t[2] Show all contact\n")       : printf("\t[2] Show all contact\n"); 
        admptr == 3 ? printf("-->\t[3] Search for a contact\n")   : printf("\t[3] Search for a contact\n"); 
        admptr == 4 ? printf("-->\t[4] Delete user's contact\n")  : printf("\t[4] Delete user's contact\n"); 
        admptr == 0 ? printf("-->\t[0] exit\n")                   : printf("\t[0] exit\n");
        while(!kbhit());
        admptr_temp = getch();
        if(admptr_temp == 13) break;
        if(admptr_temp >= '0' && admptr_temp <= '4'){
            admptr = (int) admptr_temp - 48;
        }
    }while(1);
    if(admptr>0){
        if(admptr == 1){
            admin_edituser();
        }
        else if(admptr == 2){
            Listall();
            do{}while(getch() != 13);
        }
        else if(admptr == 3){
            search_home();
        }
        else if(admptr == 4){
            Deludata(9);
        }
    }
    if(admptr == 0) Redirecting();
    else admin_home();
}

void user_home(){
    printf("NORMAL");
    Redirecting();
}

// <--------------------------------------------------   Login HOME --------------------------------------------------
int Login_Check(char loginID[8],char loginPWD[30]){
    int isfound = 0;
    int useridx;
    int i;
    for(i=0;i<user_val;i++){
        if(strcmp(loginID,Alluser[i].ID) == 0){
            isfound = 1;
            useridx = i;
        }
    }
    if (isfound == 0) return -1;
    else{
        if(strcmp(loginPWD,Alluser[useridx].PWD) == 0){
            return useridx;
        }
        else return -2;
    }
}

void Login_home(){
    char loginID[7];
    char loginPWD[30];
    char login_temp;
    int printloop;
    int errorcode = 0;
    int loginID_idx = 0,loginPWD_idx = 0,isenterpwd = 0;
    int login_Response;
    do{
        system("cls");
        printf("Enter your ID: ");
        for(printloop = 0;printloop<loginID_idx;printloop++){
            printf("%c",loginID[printloop]);
        }
        while(!kbhit());
        login_temp = getch();
        if(login_temp >= '0' && login_temp <= '9'){
            if(loginID_idx <7){
                loginID[loginID_idx] = login_temp;
                loginID_idx++;
            }
        }
        if(login_temp == 8) {
            loginID_idx--;
            if(loginID_idx <= 0) loginID_idx = 0;
        }
        if(login_temp == 13 && loginID_idx == 7) {
            break;
        }
    }while(1);
    
    do{
        system("cls");
        printf("Your ID is: %c\n",loginID[7]);
        printf("Enter your Password: ");
        for(printloop = 0;printloop<loginPWD_idx;printloop++){
            printf("*");
        }
        while(!kbhit());
        login_temp = getch();
        if(login_temp == 8){
            loginPWD_idx--;
            if(loginPWD_idx <= 0) loginPWD_idx = 0;
        }
        else{
            if(login_temp == 13) break;
            if(loginPWD_idx < 30){
                loginPWD[loginPWD_idx] = login_temp;
                loginPWD_idx++;
            }
        }
    }while(1);
    printf("%s||",loginID);
    errorcode = Login_Check(loginID,loginPWD);
    //Redirecting();
    if(errorcode < 0){
        if(errorcode == -1) {
            int retryptr = 1;
            char retryptr_temp;
            do{
                system("cls");
                printf("[ERROR] No relevant Data\n");
                retryptr == 1 ? printf("-->\t[1] Retry\n")      : printf("\t[1] Retry\n"); 
                retryptr == 2 ? printf("-->\t[2] Register\n")   : printf("\t[2] Register\n");
                retryptr == 0 ? printf("-->\t[0] Exit\n")       : printf("\t[0] Exit\n");
                while(!kbhit());
                retryptr_temp = getch();
                if(retryptr_temp == 13) break;
                if(retryptr_temp >= '0' && retryptr_temp <= '2'){
                    retryptr = (int) retryptr_temp - 48;
                }
            }while(1);
            if(retryptr == 1) Login_home();
            else if(retryptr == 2) Registeration();
        }
        else if(errorcode <= -2 && errorcode >= -3){
            int retryptr = 1;
            char retryptr_temp;
            do{
                system("cls");
                printf("[ERROR] Wrong Username or Password\n");
                retryptr == 1 ? printf("-->\t[1] Retry\n")      : printf("\t[1] Retry\n"); 
                retryptr == 2 ? printf("-->\t[2] Register\n")   : printf("\t[2] Register\n");
                retryptr == 0 ? printf("-->\t[0] Exit\n")       : printf("\t[0] Exit\n");
                while(!kbhit());
                retryptr_temp = getch();
                if(retryptr_temp == 13) break;
                if(retryptr_temp >= '0' && retryptr_temp <= '2'){
                    retryptr = (int) retryptr_temp - 48;
                }
            }while(1);
            if(retryptr == 1) Login_home();
            else if(retryptr == 2) Registeration();
        }
    }
    if (Alluser[errorcode].ID[0] == '0' && Alluser[errorcode].ID[1] == '0') admin_home();
    else user_home();
}

// <----------------------------------------------------   Home Page    ---------------------------------------------------------------------->
int home() {
    int homeptr = 1;
    char homeptr_temp;
    do{
        system("cls");
        printf("WELCOME to ICT-CMS\n");
        homeptr == 1 ? printf("-->\t[1] Registeration\n")   : printf("\t[1] Registeration\n");
        homeptr == 2 ? printf("-->\t[2] Login\n")           : printf("\t[2] Login\n");
        homeptr == 0 ? printf("-->\t[0] Exit\n")            : printf("\t[0] Exit\n");
        while(!kbhit());
        homeptr_temp = getch();
        if(homeptr_temp == 13) break;
        if(homeptr_temp >= '0' && homeptr_temp <= '2'){
            homeptr = (int) homeptr_temp - 48;
        }
    }while(1);
    if(homeptr == 1) Registeration();
    else if(homeptr == 2) Login_home();
    return homeptr;
}

int main(){
    char homechoice;
    Initialize();
    while(1){
        homechoice = home();
        if(homechoice == 0) break;
    }
}