// C program for implementation of selection sort
#include <stdio.h>
int main()
{
	int a[20],i,j,n,min,temp;

    printf("How many elements to enter : ");
    scanf("%d",&n);

    printf("Enter %d elements : ",n);
    for( i=0;i<n;++i)
        {
          scanf("%d",&a[i]);
        }
    //int a[]={10,2,44,8,90,100,105};
    //n = sizeof(a)/sizeof(a[0]);

	for (i = 0; i < n-1; i++)	// move boundary One by one
	{
		min = i;// Find min element in unsorted array
		for (j = i+1; j < n; j++)
		if (a[j] < a[min])
			min = j;
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
	}
	printf("Sorted array: ");
	for (i=0; i < n; i++)
    printf("%d ", a[i]);
	printf("\n");
	return 0;
}

