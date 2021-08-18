// Implementation of QuickSort algorithm //

// Mahady Hasan Miraz //
// ID: 1935202037  //

#include<stdio.h>
int main()
{
    int i, n, Arr[50]/*={10, 16, 8, 12, 15, 6, 3, 9, 5, 99}*/;


    //n = sizeof(Arr)/sizeof(Arr[0]);

    printf("How many elements do you want to sort? : ");
    scanf("%d",&n);

    printf("Enter %d elements : ",n);
    for( i=0;i<n;++i)
    {
      scanf("%d",&Arr[i]);
    }

    //Now sort
    quicksort(Arr, 0, n-1);

    //Print sorted Array
    printf("Sorted Element : ");
    for(i=0;i<n;i++)
    printf("%d ",Arr[i]);
    return 0;
}

void quicksort(int Arr[50], int First, int Last)
{
    int pivot,temp,i, j;

    if(First<Last)
    {
        pivot=First;
        i=First;
        j=Last;

        while(i<j)
        {
            while(Arr[i]<=Arr[pivot] && i<Last)
            i++;

            while(Arr[j]>Arr[pivot])
            j--;

            if(i<j)
            {
                temp=Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=temp;
            }
        }
        temp=Arr[pivot];
        Arr[pivot]=Arr[j];
        Arr[j]=temp;
        quicksort(Arr, First, j-1);
        quicksort(Arr, j+1, Last);
    }
}
/*
##  Algorithm of quickSorting method  ##

Partition(A[],low,high)
{
 
    while(i<j)
    {

           do
                {
                     i++;
                 } while (A[i]<=pivot);
          do
               {
                   j--;
               } while(A[j]>pivot);

          if(i<j)
                {
                   Swap(A[i],a[j]);
                }
        }
    swap(A[low], A[j])
    return j;
}

QuickSort(A[],low,high)

{
      j= Patition(A[],low,high);
      QuickSort(A[],low,j);
      QuickSort(A[],j+1,high);
}

*/