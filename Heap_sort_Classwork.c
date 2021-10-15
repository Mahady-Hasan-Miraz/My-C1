#include <stdio.h>

    void heap(int arr[], int n, int i) 
  {
    int large,left,right;       
    large = i;
    left = 2*i + 1;
    right = 2*i + 2;

    if (right < n && arr[right] > arr[large])
      large = right;

    if (left < n && arr[left] > arr[large])
      large = left;

    if (large != i) 
    {
      int temp = arr[i];
      arr[i] = arr[large];
      arr[large] = temp;
      heap(arr, n, large);
    }
  }

  int main() 
  {
    int arr[]={5,8,7,1,3,4},i,n=6,temp;

    for ( i = n / 2 - 1; i >= 0; i--)
      heap(arr, n, i);

    for ( i = n - 1; i >= 0; i--)
    {
      temp = arr[0];
      arr[0] = arr[i];
      arr[i] = temp;
      heap(arr, i, 0);
    }
    
    printf("Sorted array is : ");
    for ( i = 0; i < n; ++i)
    printf("%d ", arr[i]);
    printf("\n");
    return 0;
  }