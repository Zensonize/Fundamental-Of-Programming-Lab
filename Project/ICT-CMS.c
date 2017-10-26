#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user{
    int ID;
    char First[50];
    char Last[50];
    char Phone[11];
    char Email[50];
    char PWD[30];
};

int user_val;
struct user Alluser[100];

void Initialize(){
    FILE *userdata;
    int i;
    if ((userdata = fopen("D:\\Repository\\Fundamental-Of-Programming-Lab\\Project\\udata.txt","r")) != NULL){
        printf("[SYSTEM] loaded!\n");
    }
    fscanf(userdata,"%d,",&user_val);
    for(i=0;i<user_val;i++){
        fscanf(userdata,"%d,%49[^,],%49[^,],%10[^,],%49[^,],%29[^\n]",&Alluser[i].ID,Alluser[i].First,Alluser[i].Last,Alluser[i].Phone,Alluser[i].Email,Alluser[i].PWD);
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

void sortudata(){
    int i,j,k;
    for (i=0;i<user_val;i++){
        for(k=i+1;k<user_val;k++){
            if(Alluser[i].ID>Alluser[k].ID){
                for(j=user_val-1;j>0;j--){
                    if(Alluser[i].ID>Alluser[j].ID){
                        Alluser[99] = Alluser[i];
                        Alluser[i] = Alluser[j];
                        Alluser[j] = Alluser[99];
                        break;
                    }
                }
            }
        }
    }
}

void Updatedata(){
    int i;
    FILE *nuserdata;
    nuserdata = fopen("D:\\Repository\\Fundamental-Of-Programming-Lab\\Project\\udata.txt","w");
    fprintf(nuserdata,"%d,\n",user_val);
    for(i=0;i<user_val;i++){
        fprintf(nuserdata,"%d,%s,%s,%s,%s,%s\n",Alluser[i].ID,Alluser[i].First,Alluser[i].Last,Alluser[i].Phone,Alluser[i].Email,Alluser[i].PWD);
    }
    printf("[SYSTEM] Updated!");
    fclose(nuserdata);
}
int main(){
    Initialize();
    Initialize_check();
    sortudata();
    Updatedata();
    Initialize();
    Initialize_check();
}