#include <stdio.h>
void Login(){

}

void URegist(){

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