#include <stdio.h>
#include <math.h>
int main() {
    int a,i;
    scanf("%d",&a);
    double data[a][2];
    for(i=0;i<a;i++){
        scanf("%lf",&data[i][0]);
        data[i][1] = pow(data[i][0],2);
    }
    for(i=0;i<a;i++){
        printf("%.2f * %.2f = %f\n",data[i][0],data[i][0],data[i][1]);
    }
}