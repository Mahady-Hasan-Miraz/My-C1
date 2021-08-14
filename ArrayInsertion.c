
#include <stdio.h>

int main()
{
    int arr[100] = { 0 };
    int i, x=50, pos=6, n = 10;

    for (i = 0; i < n; i++)
       {    arr[i] = i + 1;     }
    for (i = 0; i < n; i++)
        {   printf("%d ", arr[i]);    }
    
    printf("\n");
    n=n+1; //n=11

    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];// index 1 ghor Barano

    arr[pos - 1] = x;// notun pos e 50  

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
