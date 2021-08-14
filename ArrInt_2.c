
#include<stdio.h>

int main()
    {
        int arr[20],ne,i,pos,value;

        printf("Enter the number of Elements less than 20 : ");
        scanf("%d",&ne);

        printf("Enter %d Elements : ",ne);
        for (i = 0; i < ne; i++)
            {
                scanf("%d", &arr[i]);
            }               
        printf("Enter element to insert : ");
            scanf("%d", &value);

        printf("Enter position between 1 to %d :", ne+1);
            scanf("%d", &pos);
                
        printf("Array elements before insertion : ");
            for (i = 0; i < ne; i++)
                {
                    printf("%d ", arr[i]);
                }
        printf("\n");    
            for(i=ne;i>=pos;i--)
                {
                    arr[i]=arr[i-1];
                }
        arr[pos-1]=value;
        ne++;

        printf("Array elements after  insertion : ");
            for(i=0; i<ne; i++)
                {
                    printf("%d ", arr[i]);
                }
        printf("\n");

        return 0;
    }