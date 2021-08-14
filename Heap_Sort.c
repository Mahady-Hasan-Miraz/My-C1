
// Heap Sort in C

  #include <stdio.h>

  int main() 
  {
    int arr[50],i,n,temp;
    printf("How many elements to enter : ");
    scanf("%d",&n);

    printf("Enter %d elements : ",n);
    for( i=0;i<n;++i)
    {
      scanf("%d",&arr[i]);
    }

    for ( i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);

    for ( i = n - 1; i >= 0; i--) 
    {
      temp = arr[0];
      arr[0] = arr[i];
      arr[i] = temp;
      heapify(arr, i, 0);
    }
    
    printf("Sorted array is :");
    for ( i = 0; i < n; ++i)
    printf("%d ", arr[i]);
    printf("\n");
  }

    void heapify(int arr[], int n, int i) 
  {
    int large,R,L;
    large = i;
    L = 2*i + 1;
    R = 2*i + 2;

    if (R < n && arr[R] > arr[large])
      large = R;

    if (L < n && arr[L] > arr[large])
      large = L;

    // Swap and continue heap if root not largest
    if (large != i) 
    {
      int temp = arr[i];
      arr[i] = arr[large];
      arr[large] = temp;
      heapify(arr, n, large);
    }
  }