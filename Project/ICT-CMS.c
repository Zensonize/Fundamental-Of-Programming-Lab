#include <stdio.h>
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
    int ID,Phone,Email,PW;
    char First[20],Last[30];
    int iscorrect=2;
    CScreen();
    printf(" [Registration]\n\n");
    printf("Please enter the following information\n");

    do{
        iscorrect == 2 ? printf("ID: ") : printf("[Re-type] ID: ");
        scanf("%d",&ID);
        iscorrect = Regis_numErrorhandling (ID,0);
    }while(iscorrect == 0);

    //for First-Last Name

    iscorrect = 2;
    do{
        iscorrect == 2 ? printf("Phone Number: ") : printf("[Re-type] Phone Number: ");
        scanf("%d",&Phone);
        iscorrect = Regis_numErrorhandling (Phone,1);
    }while(iscorrect == 0);

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