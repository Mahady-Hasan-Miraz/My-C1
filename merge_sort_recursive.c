/*  Implementation of Merge sort

    Mahady Hasan Miraz
    ID: 1935202037 
    
*/

#include <stdio.h>

void printArray(int *arr, int size)
{
    for (int i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int low, int mid, int high)
{ 
    int i, j, k, b[500];
    i = low;
    j = mid + 1;
    k = low;

    while(i <= mid && j <= high)
    {
        if(arr[i] < arr[j])
        {
            b[k++] = arr[i++];    // same as b[k]=a[i]; k++; i++;
        }
        else
        {
            b[k++] = arr[j++];
        }
    }
  
    while(i <= mid)
    {
        b[k++] = arr[i++];
    }
  
    while(j <= high)
    {
        b[k++] = arr[j++];
    }
  
    for(i=low; i <= high; i++)
    {
        arr[i] = b[i];  
    } 
}
void mergeSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    // int arr[] = {32, 45, 67, 2, 7};
    // int size = sizeof(arr)/sizeof(arr[0]);
 
    int arr[100];
    int size;
    
    printf("How many elements do you want to sort? : ");
    scanf("%d",&size);

    printf("Enter %d elements : ",size);
    for(int i=0;i<size;++i)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nGiven array: ");
    printArray(arr, size);
    
    mergeSort(arr, 0, size - 1);
 
    printf("\nSorted array: ");
    printArray(arr, size);
    printf("\n");
    return 0;
}

/* The algorithm is:
Algorithm Merge(A,B,m,n)
{
     i=0, j=0, k=0;
  while (i<m && j<n)    //2
            {    if (A[i]<B[j])
                       {                        
                           C[k++]= A[i++];
                        }
                else
                       {
                           C[k++]= B[j++];
                        }
              }
    for (; i<m; i++)
               C[k++]= A[i];
     for (; j<n; j++)
               C[k++]= B[j];
  }

Algorithm MargeSort (A,l,h)
{
        if (l<h)
            {
                Mid = (l+h)/2;
                MargeSort (A,l,Mid);
               MargeSort (A, Mid+1, h);
                Marge(A,l,mid,h)   ;
            }
}
*/
