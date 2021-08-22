// Implementation of Merge sort Algorithm //

/*  Mahady Hasan Miraz
    ID: 1935202037  */

#include <stdio.h>

void main() {
  int arr[50]= {6, 5, 12, 10, 9, 1};
  int size= sizeof(arr) / sizeof(arr[0]);

  /*printf("How many elements do you want to sort? : ");
  scanf("%d",&size);

  printf("Enter %d elements : ",size);
  for(int i=0;i<size;++i)
  {
    scanf("%d",&arr[i]);
  }*/


  mergeSort(arr, 0, size - 1);

  printf("Sorted array: \n");
  printArray(arr, size);
}

void mergeSort(int arr[], int low, int up) {
  if (low < up) {

    int mid = (low+up) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, up);
    merge(arr, low, mid, up);
  }
}

void merge(int arr[], int low, int mid, int up) {

  int lsai = mid - low + 1; //index of left sub array//n1
  int rsai = up - mid;  // index of left sub array//n2

  int b[lsai], c[rsai];
  int i, j, k;

  for ( i = 0; i < lsai; i++)
    b[i] = arr[low++];

  for ( j = 0; i < rsai; i++)
    arr[j] = arr[low++];


  i = 0;
  j = 0;
  k = low;

  while (i < lsai && j < rsai) {
    if (b[i] <= c[j]) 
    {
      arr[k] = b[i++];
    } 
    else 
    {
      arr[k] = c[j++];
    }
    k++;
  }

  while (i <= lsai) {
    arr[k++] = b[i++];
  }

  while (j <= rsai) {
    arr[k++] = c[j++];
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
    printf("\n");
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
*/
