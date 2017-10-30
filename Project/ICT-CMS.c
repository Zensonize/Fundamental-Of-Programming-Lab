#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user{
    int ID;
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
// <-------------------------------------------------- LOGIN ------------------------------------------------------------------->
void Login_Check(){
    printf("Please enter yor ID: ");
    scanf("%d",inID);
    printf("Please enter your password: ");
    scanf("%s",inPWD);
    int i,isvaliduser = 1;
    for(i = 0;i<user_val;i++){
        if(inID == Alluser[i].ID){
            if(strcmp(Alluser[i].PWD,inPWD) != 0){
                isvaliduser = 0;
                printf("[ERROR] Wrong ID or Password\n");
                printf("[Re-type] ");
            }
            else {
                printf("\n Now you are logged in as a student in the system.");
                printf("\n You can start using the following functions.");
            }
        }
        if(i ==user_val-1 || isvaliduser == 0) Login_Check();
    }
}

void Login(){
    int inID;
    char inPWD[30];
    printf(" [LOGIN Page]\n\n");
    
    if(Login_Check(&inID,inPWD) == 0) Login();
}

// <-------------------------------------------------- REGISTERATION ----------------------------------------------------------------------->
void Regist_ID(){
    printf("ID: ");
    scanf("%d",&Alluser[user_val].ID);
    if(Alluser[user_val].ID/1000000 == 0 || Alluser[user_val].ID/1000000 >= 10) {
        printf("[ERROR] You can use only 7 digits for ID\n");
        printf("[Re-type] ");
        Regist_ID();
    }
}

//              <-------------- NAME REGISTERATION ------------->
int Regist_isvalidName(char string[],int length){
    //isalpha(char ??) -- > use loop
    int i,result = 1;
    if((int) string[0] >= 97 && (int) string[0] <=122){
        return 2;
    }
    else {
        for(i=0;i<length;i++){
            if((int)string[i] < 65 || (int)string[i] > 172){
                result = 0;
                break;
            }
            else if((int)string[i] > 90 && (int)string[i] < 97){
                result = 0;
                break;
            }
        }
    }
    return result;
}

void Regist_Firstname(){
    int isvalid;
    printf("First name: ");
    scanf("%s",Alluser[user_val].First);
    isvalid = Regist_isvalidName(Alluser[user_val].First,strlen(Alluser[user_val].First));
    if(isvalid == 2) {
        //memset(Alluser[user_val].First, NULL, strlen(Alluser[user_val].First));
        printf("[ERROR] First character of First name should be \"CAPITAL\" letter\n");
        printf("[Re-type] ");
        Regist_Firstname();
    }
    else if(isvalid == 0){
        //memset(Alluser[user_val].First, NULL, strlen(Alluser[user_val].First));
        printf("[ERROR] Invalid First name\n");
        printf("[Re-type] ");
        Regist_Firstname();
    }
}

//Didn't check for error

void Regist_Lastname(){
    int isvalid;
    printf("Last name: ");
    scanf("%s",Alluser[user_val].Last);
    isvalid = Regist_isvalidName(Alluser[user_val].Last,strlen(Alluser[user_val].Last));
    if(isvalid == 2) {
        //memset(Alluser[user_val].Last, NULL, strlen(Alluser[user_val].Last));
        printf("[ERROR] First character of Last name should be \"CAPITAL\" letter\n");
        printf("[Re-type] ");
        Regist_Lastname();
    }
    else if(isvalid == 0){
        //memset(Alluser[user_val].Last, NULL, strlen(Alluser[user_val].Last));
        printf("[ERROR] Invalid Last name\n");
        printf("[Re-type] ");
        Regist_Lastname();
    }   
}
int Regist_isvalidPhone(){
    if(strlen(Alluser[user_val].Phone) != 10){
        printf("[ERROR] You can use only 10 digits for phone number\n");
        printf("[Re-type] ");
        return 0;
    }
    else{
        int i,wrong = 1;
        for(i=0;i<10;i++){
            if((int)Alluser[user_val].Phone[i] < 48 || (int)Alluser[user_val].Phone[i] > 57){
                printf("%c %d",Alluser[user_val].Phone[i],(int)Alluser[user_val].Phone[i]);
                wrong = 0;
                printf("[ERROR] Invalid phone number\n");
                printf("[Re-type] ");
                break;
            }
        }
        return wrong;
    }
}
void Regist_Phone(){
    printf("Phone number: ");
    scanf("%s",Alluser[user_val].Phone);
    if(Regist_isvalidPhone() == 0) Regist_Phone();
    
}

// BUG when @ is the last char

void Regist_Email(){
    printf("Email: ");
    scanf("%s",Alluser[user_val].Email);
    if(strstr(Alluser[user_val].Email,"@.") != NULL){
        printf("[ERROR] Invalid Email\n");
        printf("[Re-type] ");
        Regist_Email();
    }
    else if(strstr(Alluser[user_val].Email,"@") == NULL){     //use strchr
        printf("[ERROR] Email must contain \'@\'\n");
        printf("[Re-type] ");
        Regist_Email();
    }
    else if(strstr(Alluser[user_val].Email,"@") != NULL){
        if(strstr(Alluser[user_val].Email,".") == NULL){
            printf("[ERROR] Email must contain \'@\'\n");
            printf("[Re-type] ");
            Regist_Email();
        }
    }
}

int Regist_PWDconfirm(){
    char confPWD[30];
    printf("Confirmed Password: ");
    scanf("%s",confPWD);
    printf("%d\n",strcmp(Alluser[user_val].PWD, confPWD));
    if(strcmp(Alluser[user_val].PWD, confPWD) != 0){
        printf("[ERROR] Password didn't match\n");
        printf("[Re-type] ");
        return 0;
    }
}

void Regist_PWD(){
    printf("Password: ");
    scanf("%s",Alluser[user_val].PWD);
    printf("%d",strlen(Alluser[user_val].PWD));
    if(strlen(Alluser[user_val].PWD) < 8){
        printf("[ERROR] You must use at least 8 characters for password\n");
        printf("[Re-type] ");
        Regist_PWD();
    }
    if(Regist_PWDconfirm() == 0){
        Regist_PWD();
    }
}

void Regist_Success(){
    printf("\n -- End of the Registration Process --\n\n");
    printf("Congratulation!! ");
    printf("%s,\n",Alluser[user_val].First);
    printf("Now you can login to the ICT Contact Management System and start to search for ICT faculty staffs' and friends' information.\n");
}

void Sortudata(){
    int i,j,k;
    for (i=0;i<user_val;i++){
        for(k=i+1;k<user_val;k++){
            if(Alluser[i].ID>Alluser[k].ID){
                for(j=user_val-1;j>0;j--){
                    if(Alluser[i].ID>Alluser[j].ID){
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

void Initialize(){
    FILE *userdata;
    int i;
    if ((userdata = fopen("D:\\Repository\\Fundamental-Of-Programming-Lab\\Project\\udata.txt","r")) != NULL){
        printf("[SYSTEM] loaded!\n");
    }
    fscanf(userdata,"%d,",&user_val);
    for(i=0;i<user_val;i++){
        fscanf(userdata,"%d,%49[^,],%49[^,],%15[^,],%49[^,],%29[^,],%d",&Alluser[i].ID,Alluser[i].First,Alluser[i].Last,Alluser[i].Phone,Alluser[i].Email,Alluser[i].PWD,&Alluser[i].Index);
    }
    printf("[SYSTEM] loaded %d user(s)!\n",user_val);
    fclose(userdata);
}

void Initialize_check(){
    int i;
    for(i=0;i<user_val;i++){
        printf("[USER %2d]\n",i);
        printf("\tID: %d\n",Alluser[i].ID);
        printf("\tFirstname: %s\n",Alluser[i].First);
        printf("\tLastname: %s\n",Alluser[i].Last);
        printf("\tPhone number: %s\n",Alluser[i].Phone);
        printf("\tEmail: %s\n",Alluser[i].Email);
        printf("\tPassword: %s\n\n",Alluser[i].PWD);
    }
}

// <--------------------------------------------------   DATA OUTPUT   ----------------------------------------------------------------------->

void Updatedata(){
    int i;
    
    FILE *nuserdata;
    nuserdata = fopen("D:\\Repository\\Fundamental-Of-Programming-Lab\\Project\\udata.txt","w");
    fprintf(nuserdata,"%d,\n",user_val+1);
    for(i=0;i<=user_val;i++){
        fprintf(nuserdata,"%d,%s,%s,%s,%s,%s,%d\n",Alluser[i].ID,Alluser[i].First,Alluser[i].Last,Alluser[i].Phone,Alluser[i].Email,Alluser[i].PWD,i);
    }
    printf("[SYSTEM] Updated!");
    fclose(nuserdata);
    Initialize();
}

void URegist(){
    printf(" [Registration]\n\n");
    printf("Please enter the following information\n");
    Regist_ID();
    Regist_Firstname();
    Regist_Lastname();
    Regist_Phone();
    Regist_Email();
    Regist_PWD();
    Regist_Success();
    Sortudata();
    Updatedata();


}



// <--------------------------------------------------   MAIN MENU   ----------------------------------------------------------------------->

void MMenu_routing (){
    int choice;
    printf("Enter the choice : ");
    scanf("%d",&choice);
    if(choice == 1) {
        URegist();
    }
    else if(choice == 2){
        Login();
    }
    else if(choice != 0) MMenu_routing();
}

void MMenu(){
    char Mchoice;
    printf("===============================\n");
    printf("ICT Contact Management Systems\n");
    printf("===============================\n");
    printf("[1] User Registration\n");
    printf("[2] Login\n");
    printf("[0] Exit\n");
    printf("-----------------------\n");
    MMenu_routing();
}

int main(){
    Initialize();
    MMenu();
}