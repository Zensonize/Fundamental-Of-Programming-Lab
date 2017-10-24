#include <stdio.h>
void Regis_success(char FIRST[20], int length){
    printf("\n -- End of the Registration Process --\n\n");
    printf("Congratulation!! ");
    int i;
    for(int i=0;i<length;i++){
        printf("%c",FIRST[i]);
    } 
    printf(",\n");
    printf("Now you can login to the ICT Contact Management System and start to\nsearch for ICT faculty staffs' and friends' information.\n");
}

int Regis_PWDverification(char PWDa[30],char PWDb[30],int l1,int l2){
    if(l1 != l2) {
        printf("[ERROR] Password didn't match\n");
        return 0;
    }
    else{
        int correct = 1,z;
        for(z=0;z<l1;z++){
            if(PWDa[z] != PWDb[z]) {
                printf("[ERROR] Password didn't match\n");
                correct = 0;
                break;
            }
        }
        return correct;
    }
}

int Regis_numErrorhandling (int value,int NO){

    if(NO == 0){
        int ID[7],index=0,val_cache;
        val_cache = value;
        while(val_cache>0){
            ID[index++] = val_cache%10;
            val_cache /= 10;
        }
        if(index != 7) {
            printf("[ERROR] You can use only 7 digits for ID\n");
            return 0;
        }
        else return 1;
    } 
    else{
        int Phone[10],index=0,val_cache;
        val_cache = value;
        while(val_cache>0){
            Phone[index++] = val_cache%10;
            val_cache /= 10;
        }
        if(index == 10 && Phone[9] != 0){
            printf("[ERROR] Phone number can't start with %d\n",Phone[9]);
            return 0;
        }
        else if(index != 9) {
            printf("[ERROR] You can use only 10 digits for phone number\n");
            return 0;
        }
        else return 1;
    }
}

void CScreen() {
    printf("\n\n\n\n\n");
}

void Login(){

}

void URegist(){
    int ID,Phone,Email;
    char First[20],Last[30],PWD[30],PWD1[30];
    int first_length,last_length,pwd_length,pwd1_length;
    int iscorrect=2;
    CScreen();
    printf(" [Registration]\n\n");
    printf("Please enter the following information\n");

    do{
        iscorrect == 2 ? printf("ID: ") : printf("[Re-type] ID: ");
        scanf("%d",&ID);
        iscorrect = Regis_numErrorhandling (ID,0);
    }while(iscorrect == 0);
    
    iscorrect = 2;
    do{
        iscorrect == 2 ? printf("First name: ") : printf("[Re-type] First name: ");
        first_length=0;
        char first_temp;
        do{
            if(first_length == 0) scanf(" %c",&First[0]);
            else First[first_length] = first_temp;
            first_temp = getchar();
            first_length++;
        }while(first_temp != '\n');

        if((int)First[0]>96){
            iscorrect = 0;
            printf("[ERROR] First character of First name should be \"Capital\" letter\n");
        }
        else iscorrect = 2;
    }while(iscorrect == 0);

    do{
        iscorrect == 2 ? printf("Last name: ") : printf("[Re-type] Last name: ");
        last_length=0;
        char last_temp;
        do{
            if(last_length == 0) scanf(" %c",&Last[0]);
            else Last[last_length] = last_temp;
            last_temp = getchar();
            last_length++;
        }while(last_temp != '\n');

        if((int)Last[0]>96){
            iscorrect = 0;
            printf("[ERROR] First character of Last name should be \"Capital\" letter\n");
        }
        else iscorrect = 2;
    }while(iscorrect == 0);

    do{
        iscorrect == 2 ? printf("Phone Number: ") : printf("[Re-type] Phone Number: ");
        scanf("%d",&Phone);
        iscorrect = Regis_numErrorhandling (Phone,1);
    }while(iscorrect == 0);

    iscorrect = 2;
    // PWD1 ---------------------------------------------------------
    do{
        do{
            iscorrect == 2 ? printf("Password: ") : printf("[Re-type] Password: ");
            pwd_length=0;
            char pwd_temp;
            do{
                if(pwd_length == 0) scanf(" %c",&PWD[0]);
                else PWD[pwd_length] = pwd_temp;
                pwd_temp = getchar();
                pwd_length++;
            }while(pwd_temp != '\n');
            if(pwd_length<8) {
                printf("[ERROR] You must use at least 8 characters for password\n");
                iscorrect = 0;
            }
            else iscorrect =2;
        }while(iscorrect == 0);
    // PWD2 ---------------------------------------------------------
    
        printf("Confirmed Password: ");
        pwd1_length=0;
        char pwd1_temp;
        do{
            if(pwd1_length == 0) scanf(" %c",&PWD[0]);
            else PWD[pwd_length] = pwd1_temp;
            pwd1_temp = getchar();
            pwd1_length++;
        }while(pwd1_temp != '\n');
        iscorrect = Regis_PWDverification(PWD,PWD1,pwd_length,pwd1_length);

    }while(iscorrect == 0);


    Regis_success(First,first_length);
}

void MMenu_routing (char choice){
    if(choice == '1') URegist();
    else if(choice == '2') Login();
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
    printf("Enter the choice : ");
    while(1){
        scanf(" %c",&Mchoice);
        if(Mchoice == '1' || Mchoice == '2' || Mchoice == '0') break;
    }
    MMenu_routing(Mchoice);
}

int main() {
    MMenu();
    return 0;
}