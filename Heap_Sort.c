// implementation of heap sort

    // Mahady Hasan Miraz
    // ID: 1935202037

  #include <stdio.h>

    void heapify(int arr[], int n, int i) 
  {
    int large,left,right;       
    large = i;
    left = 2*i + 1;
    right = 2*i + 2;

    if (right < n && arr[right] > arr[large])
      large = right;

    if (left < n && arr[left] > arr[large])
      large = left;

    // Swap and continue heap if root not largest
    if (large != i) 
    {
      int temp = arr[i];
      arr[i] = arr[large];
      arr[large] = temp;
      heapify(arr, n, large);
    }
  }

  int main() 
  {
    int arr[50],i,n,temp;

    //arr[]={1,2,3,4,5,6};
    //n= sizeof(arr)/sizeof(arr[0])

    printf("How many elements to sort (less then 50) ? : ");
    scanf("%d",&n);

    printf("Enter %d elements : ",n);
    for( i=0;i<n;++i)
    {
      scanf("%d",&arr[i]);
    }

    for ( i = n / 2 - 1; i >= 0; i--)//creat heap
      heapify(arr, n, i);

    for ( i = n - 1; i >= 0; i--) //delete element from heap & store
    {
      temp = arr[0];
      arr[0] = arr[i];
      arr[i] = temp;
      heapify(arr, i, 0);
    }
    
    printf("Sorted array is : ");
    for ( i = 0; i < n; ++i)
    printf("%d ", arr[i]);
    printf("\n");
    return 0;
  }