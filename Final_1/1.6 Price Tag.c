#include <stdio.h>

struct storage{
    char ID[7];
    char Name[20];
    double price;
    double discount;
};

int main() {
    int a,i;
    scanf("%d",&a);
    struct storage silo1[a]; 
    for(i=0;i<a;i++){
        scanf("%s",silo1[i].ID);
        scanf("%s",silo1[i].Name);
        scanf("%lf",&silo1[i].price);
        scanf("%lf",&silo1[i].discount);
    }
    printf("ID\tName\tPrice\tDiscount  Discounted Price\n");
    for(i=0;i<a;i++){
        printf("%s\t%s\t$%.2f\t%.0f\t  %.2f\n",silo1[i].ID,silo1[i].Name,silo1[i].price,silo1[i].discount,silo1[i].price*silo1[i].discount/100);
    }
}