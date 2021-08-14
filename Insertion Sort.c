// Insertion sort in C

#include <stdio.h>

int main()
{
    int array[20],n,i,j,k,s;
    printf("How many elements to enter : ");
    scanf("%d",&n);

    printf("Enter %d elements : ",n);
    for( i=0;i<n;++i)
    {
      scanf("%d",&array[i]);
    }

    for ( s = 1; s < n; s++) {
    k = array[s];
    j = s-1;

    while (k < array[j] && j >= 0)
      {
        array[j+1] = array[j];
        --j;
      }
    array[j+1] = k;
  }

  printf("Sorted array : ");

  for (int i = 0; i < n; i++) {
  printf("%d ", array[i]);
  }
  printf("\n");
}
