// Linear Search in C           << My 1st method >>
/*#include<stdio.h>
int main()
{
    int a[20],i,x,n;

    printf("How many elements to enter : ");
    scanf("%d",&n);

    printf("Enter %d elements : ",n);
    for(i=0;i<n;++i)
        {
          scanf("%d",&a[i]);
        }
    printf("Enter element to search : ");
    scanf("%d",&x);

    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
    if(i<n)
       {
        printf("\nElement found at   Index : %d\n\t\tPosition : %d\n",i,i+1);
       }
    else
        {
          printf("Element not found");
        }
    return 0;
}
*/
// Linear Search in C           << My 2nd method >>

#include <stdio.h>

int search(int array[], int n, int y) {

  for (int i = 0; i < n; i++)
    if (array[i] == y)
      return i;
  return -1;
}
int main() {
  int a[20],i,x,n,res;

      printf("How many elements to enter : ");
    scanf("%d",&n);

    printf("Enter %d elements : ",n);
    for(i=0;i<n;++i)
        {
          scanf("%d",&a[i]);
        }
  printf("Enter an element to search : ");
  scanf("%d",&x);

  res = search(a, n, x);

  (res == -1) ? printf("Element not found")
   : printf("\nElement found at   Index : %d\n\t\tPosition : %d\n", res,res+1);
}
