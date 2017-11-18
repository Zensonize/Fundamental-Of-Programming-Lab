#include <stdio.h>

#define ssss newSS.student
#define ssn newSS.name
#define ss2 student2
#define ssc newSS.criterion
struct score{
    float like;
    float dislike;
};

struct SetSurvey{
    char name[20];
    float criterion;
    struct score student[5];
};

void evaluate(struct score student2[5],float crit) {
    int i;
    float meanl = 0 ,meandis = 0;
    for(i=0;i<5;i++){
        meanl += ss2[i].like;
        meandis += ss2[i].dislike;
    }
    meanl /= 5;
    meandis /=5;
    printf("Mean of Like: %.2f\n",meanl);
    printf("Mean of Dislike: %.2f\n",meandis);
    meanl >= crit ? printf("Like: Good\n") : printf("Like: Bad\n");
    meandis < crit ? printf("Dislike: Good\n") : printf("Dislike: Bad\n");
}
int main(){
    int i;
    struct SetSurvey newSS;
    scanf("%[^\n]",ssn);
    scanf("%f",&ssc);
    for(i=0;i<5;i++){
        scanf("%f %f",&ssss[i].like,&ssss[i].dislike);
    }
    printf("Survey's name: %s\n",ssn);
    printf("Criterion: %.2f\n",ssc);
    evaluate(ssss,ssc);
    
}