#include <stdio.h>

int mode(int a[],int n) {
   int maxv = 0, maxc = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxc) {
         maxc = count;
         maxv = a[i];
      }
   }

   return maxv;
}

int main(){
    int input[500];
    int count = 0;
    int i;
    int sum = 0;
    float avg;
    printf("Input Number: ");
    for(i = 0 ; i < 500 ; i++){
        scanf("%d" , &input[i]);
        if(input[i] > 0){
            if(input[i] > 0 && input[i] < 101){
                sum += input[i];
                count += 1;
            }
        }else{
            break;
        }
    }
    printf("Mode = %d \n" ,mode(input , count) );
    return 0;
}