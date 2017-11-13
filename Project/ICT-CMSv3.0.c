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
void Deludata(){
    //postion is the index
    char delID[8];
    char delID_temp;
    int delID_idx = 0,i;
    int check;
    int isfound = -1;
    do{
        system("cls");
        printf("DELETE ID: ");
        for(i=0;i<delID_idx;i++){
            printf("%c",delID[i]);
        }
        printf("\n");
        delID_temp = getch();
        if(delID_temp == 13 && delID_idx == 7) break;
        else if(delID_temp == 8){
            delID_idx--;
        }
        else if(delID_idx == 7) continue;
        else if(delID_temp >= '0' && delID_temp <= '9'){
            delID[delID_idx] = delID_temp;
            delID_idx++;
        }
    }while(1);
    
    for(check = 0;check<user_val;check++){
        if(strcmp(delID,Alluser[check].ID) == 0){
            isfound = check;
            break;
        }
    }
    char a;
    if(isfound >= 0){
        do{
            printf("Delete %s? (Y/N)\n",Alluser[isfound].ID);
            a = getch();
            if(a == 'N' || a == 'n'){
                break;
            }
            else if(a == 'Y' || a == 'y'){
                int deltmp;
                for(deltmp = isfound;deltmp<user_val;deltmp++){
                    Alluser[deltmp] = Alluser[deltmp+1];
                }
                user_val-=2;
                printf("Deleted user %s",delID);
                Updatedata(user_val);
                Redirecting();
                break;
            }
        }while(1);
    }
    else {
        printf("[ERROR] no relevant data\n");
        printf("Retry? (Y/N)");
        do{
            a = getch();
            if(a == 'N' || a == 'n' || a == 'Y' || a == 'y') break;
        }while(1);
        if(a == 'Y' || a == 'y') Deludata();
    }
    
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

void do_Search(char searchchar[],int len_search,char db[60],int len_text,int uindex){
    int pos_search = 0;
    int pos_text = 0;
    char dbupdate[60];
    int i;
    for(i=0;i<=len_text;i++){
        if(i!=len_text) dbupdate[i] = db[i];
        else dbupdate[i] = 'a';
    }
    for (pos_text = 0; pos_text < len_text;++pos_text){
        if(dbupdate[pos_text] == searchchar[pos_search]){
            ++pos_search;
            if(pos_search == len_search){
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
    char searchPhone[10];
    char search_temp;
    int printloop,searchPhone_idx = 0;
    int findloop;
    int entered =0;
    do{
        if(entered != 0) while(!kbhit());
        entered = 1;
        system("cls");
        printf("Search Phone: ");
        /*for(printloop = 0;printloop<searchID_idx;printloop++){
            printf("%c",searchID[printloop]);
        }*/
        //while(!kbhit());
        search_temp = getch();
        //system("cls");
        if(search_temp == 13) break;
        if(search_temp >= '0' && search_temp <= '9'){
            if(searchPhone_idx <10){
                searchPhone[searchPhone_idx] = search_temp;
                searchPhone_idx++;
            }
        }
        if(search_temp == 8) {
            searchPhone_idx--;
            if(searchPhone_idx <= 0) searchPhone_idx = 0;
        }
        for(printloop = 0;printloop<searchPhone_idx;printloop++){
            printf("%c",searchPhone[printloop]);
        }
        printf("\n");
        if(searchPhone_idx>2){
            for(findloop = 0;findloop<user_val;findloop++){
                do_Search(searchPhone,strlen(searchPhone),Alluser[findloop].Phone,strlen(Alluser[findloop].Phone),findloop);
            }
        }
        //while(!kbhit());
        //search_temp = getch();
    }while(1);

}

void searchEmail(){
    char searchEmail[20];
    char search_temp;
    int printloop,searchEmail_idx = 0;
    int findloop;
    int entered =0;
    do{
        if(entered != 0) while(!kbhit());
        entered = 1;
        system("cls");
        printf("Search Email: ");
        /*for(printloop = 0;printloop<searchID_idx;printloop++){
            printf("%c",searchID[printloop]);
        }*/
        //while(!kbhit());
        search_temp = getch();
        //system("cls");
        if(search_temp == 13) break;
        if(search_temp >= 'A' && search_temp <= 'z'){
            if(searchEmail_idx <10){
                searchEmail[searchEmail_idx] = search_temp;
                searchEmail_idx++;
            }
        }
        if(search_temp == 8) {
            searchEmail_idx--;
            if(searchEmail_idx <= 0) searchEmail_idx = 0;
        }
        for(printloop = 0;printloop<searchEmail_idx;printloop++){
            printf("%c",searchEmail[printloop]);
        }
        printf("\n");
        if(searchEmail_idx>2){
            for(findloop = 0;findloop<user_val;findloop++){
                do_Search(searchEmail,strlen(searchEmail),Alluser[findloop].Email,strlen(Alluser[findloop].Email),findloop);
            }
        }
        //while(!kbhit());
        //search_temp = getch();
    }while(1);
}

void searchLast(){
    char searchLast[20];
    char search_temp;
    int printloop,searchLast_idx = 0;
    int findloop;
    int entered =0;
    do{
        if(entered != 0) while(!kbhit());
        entered = 1;
        system("cls");
        printf("Search Last Name: ");
        /*for(printloop = 0;printloop<searchID_idx;printloop++){
            printf("%c",searchID[printloop]);
        }*/
        //while(!kbhit());
        search_temp = getch();
        //system("cls");
        if(search_temp == 13) break;
        if(search_temp >= 'A' && search_temp <= 'z'){
            if(searchLast_idx <10){
                searchLast[searchLast_idx] = search_temp;
                searchLast_idx++;
            }
        }
        if(search_temp == 8) {
            searchLast_idx--;
            if(searchLast_idx <= 0) searchLast_idx = 0;
        }
        for(printloop = 0;printloop<searchLast_idx;printloop++){
            printf("%c",searchLast[printloop]);
        }
        printf("\n");
        if(searchLast_idx>2){
            for(findloop = 0;findloop<user_val;findloop++){
                do_Search(searchLast,strlen(searchLast),Alluser[findloop].Last,strlen(Alluser[findloop].Last),findloop);
            }
        }
        //while(!kbhit());
        //search_temp = getch();
    }while(1);
}

void searchFirst(){
    char searchFirst[20];
    char search_temp;
    int printloop,searchFirst_idx = 0;
    int findloop;
    int entered =0;
    do{
        if(entered != 0) while(!kbhit());
        entered = 1;
        system("cls");
        printf("Search First Name: ");
        /*for(printloop = 0;printloop<searchID_idx;printloop++){
            printf("%c",searchID[printloop]);
        }*/
        //while(!kbhit());
        search_temp = getch();
        //system("cls");
        if(search_temp == 13) break;
        if(search_temp >= 'A' && search_temp <= 'z'){
            if(searchFirst_idx <10){
                searchFirst[searchFirst_idx] = search_temp;
                searchFirst_idx++;
            }
        }
        if(search_temp == 8) {
            searchFirst_idx--;
            if(searchFirst_idx <= 0) searchFirst_idx = 0;
        }
        for(printloop = 0;printloop<searchFirst_idx;printloop++){
            printf("%c",searchFirst[printloop]);
        }
        printf("\n");
        if(searchFirst_idx>2){
            for(findloop = 0;findloop<user_val;findloop++){
                do_Search(searchFirst,strlen(searchFirst),Alluser[findloop].First,strlen(Alluser[findloop].First),findloop);
            }
        }
        //while(!kbhit());
        //search_temp = getch();
    }while(1);
}

void searchID(){
    char searchID[7];
    char search_temp;
    int printloop,searchID_idx = 0;
    int findloop;
    int entered = 0;
    do{
        if(entered != 0) while(!kbhit());
        entered = 1;
        system("cls");
        printf("Search ID: ");
        /*for(printloop = 0;printloop<searchID_idx;printloop++){
            printf("%c",searchID[printloop]);
        }*/
        //while(!kbhit());
        search_temp = getch();
        //system("cls");
        if(search_temp == 13) break;
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
        for(printloop = 0;printloop<searchID_idx;printloop++){
            printf("%c",searchID[printloop]);
        }
        printf("\n");
        if(searchID_idx>2){
            for(findloop = 0;findloop<user_val;findloop++){
                do_Search(searchID,strlen(searchID),Alluser[findloop].ID,strlen(Alluser[findloop].ID),findloop);
            }
        }
        //while(!kbhit());
        //search_temp = getch();
    }while(1);
    
}

void search_home(){
    int searchptr = 1;
    char searchptr_temp;
    do{
        system("cls");
        printf("WELCOME to ICT-CMS Advance Search System\n");
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
            Deludata();
        }
    }
    if(admptr == 0) Redirecting();
    else admin_home();
}

// <------------------------------------------------------ USER ---------------------------------------------------->

void editme(int usertoken){
    int editmeptr = 1;
    char editmeptr_temp;
    do{
        system("cls");
        printf("My profile\n");
        ListU(usertoken);
        printf("---------------------------------------------------------------------------------------------\n");
        editmeptr == 1 ? printf("-->\t[1] Edit my ID\n")             : printf("\t[1] Edit my ID\n");
        editmeptr == 2 ? printf("-->\t[2] Edit my First name\n")     : printf("\t[2] Edit my First name\n"); 
        editmeptr == 3 ? printf("-->\t[3] Edit my Last name\n")      : printf("\t[3] Edit my Last name\n"); 
        editmeptr == 4 ? printf("-->\t[4] Edit my Phone number\n")   : printf("\t[4] Edit my Phone number\n"); 
        editmeptr == 5 ? printf("-->\t[5] Edit my Email\n")          : printf("\t[5] Edit my Email\n"); 
        editmeptr == 6 ? printf("-->\t[6] Edit my Password\n")       : printf("\t[6] Edit my Password\n"); 
        editmeptr == 0 ? printf("-->\t[0] Back\n")                   : printf("\t[0] Back\n");
        while(!kbhit());
        editmeptr_temp = getch();
        if(editmeptr_temp == 13) break;
        if(editmeptr_temp >= '0' && editmeptr_temp <= '6'){
            editmeptr = (int) editmeptr_temp - 48;
        }
    }while(1);
    if(editmeptr != 0) editme(usertoken);
}

void user_home(int usertoken){
    int userptr = 1;
    char userptr_temp;
    do{
        system("cls");
        printf("WELCOME to ICT-CMS %s\n",Alluser[usertoken].ID);
        userptr == 1 ? printf("-->\t[1] Edit my Contact\n")         : printf("\t[1] Edit my Contact\n");
        userptr == 2 ? printf("-->\t[2] Show all contact\n")        : printf("\t[2] Show all contact\n"); 
        userptr == 3 ? printf("-->\t[3] Search for a contact\n")    : printf("\t[3] Search for a contact\n"); 
        userptr == 0 ? printf("-->\t[0] exit\n")                    : printf("\t[0] exit\n");
        while(!kbhit());
        userptr_temp = getch();
        if(userptr_temp == 13) break;
        if(userptr_temp >= '0' && userptr_temp <= '3'){
            userptr = (int) userptr_temp - 48;
        }
    }while(1);
    if(userptr>0){
        if(userptr == 1){
            editme(usertoken);
        }
        else if(userptr == 2){
            Listall();
            do{}while(getch() != 13);
        }
        else if(userptr == 3){
            search_home();
        }
    }
    if(userptr == 0) Redirecting();
    else user_home(usertoken);
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
        printf("Your ID is: %s\n",loginID);
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
    else user_home(errorcode);
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