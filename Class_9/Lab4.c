#include <stdio.h>

  int main() {
    int dimension, dimensionOfN, divisible,
    i, j, k, temp, count = 0;

    printf("Input number of dimension and K value:");
    scanf("%d %d", & dimension, & divisible);
    dimensionOfN = dimension * dimension;
    int arr[dimensionOfN];
    for (i = 0; i < dimensionOfN; i++) {
      printf("Input number %d : ", i + 1);
      scanf("%d", & arr[dimensionOfN]);
    }
    for (int i = 0; i < dimensionOfN-2; i++)
    {
       for (int j = i+1; j < dimensionOfN-1; j++)
       {
           for (int k = j+1; k < dimensionOfN; k++)
           {
               temp = arr[i] + arr[j] + arr[k];
               if (temp % divisible == 0)
               {
                   count += 1 ;
                 
               }
           }
       }
    }

    printf("DUMMY = %d\n",count);

    return 0;
  }
