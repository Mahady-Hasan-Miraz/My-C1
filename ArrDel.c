
#include<stdio.h>

int main()
    {
        int arr[20],ne,i,pos,value;

        start1:
        printf("Enter the number of Elements less than 20 : ");
        scanf("%d",&ne);

        printf("Enter %d Elements : ",ne);
            for (i = 0; i < ne; i++)
                {
                    scanf("%d", &arr[i]);
                }

        printf("Enter position between 1 to %d :", ne);
            scanf("%d", &pos);

        printf("Array elements before insertion : ");
            for (i = 0; i < ne; i++)
                {
                    printf("%d ", arr[i]);
                }
        printf("\n"); 
                       
        //for(i=ne;i>=pos;i--)
        for(i=pos-1;i<ne-1;i++)
            {
                //arr[i]=arr[i-1];
                arr[i]=arr[i+1];
            }
        //arr[pos-1]=value;
        // ne++;

        printf("Array elements after insertion : ");
            //for(i=0; i<ne; i++)
            for(i=0; i<ne-1; i++)
                {
                    printf("%d ", arr[i]);
                }
        printf("\n");

        return 0;
    }

