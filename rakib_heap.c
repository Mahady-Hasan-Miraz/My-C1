/*
   Name=Md rakib Mia
   ID=1935202029
*/

#include <stdio.h>


int main()

{
    int   i, j, temp, root, swapValue;
    int heap[50],array_size;
    ///array size declare
    printf("Enter Array size(1 to 50)=");
    scanf("%d",&array_size);

    ///input value
    printf("Input %d value=",array_size);
    for(i=0; i<array_size; i++) {
        scanf("%d",&heap[i]);
    }

    ///My array print
    printf("\nMy array=[");
    for (i = 0; i < array_size; i++) {
        printf("%d  ", heap[i]);
    }
    printf(" ]");

    ///this loop for max heap
    for (i = 1; i < array_size; i++) {
        ///temporary value save in temp
        temp = i;
        do {
            root = (temp - 1) / 2;
            if (heap[root] < heap[temp]) 
            {
                swapValue = heap[root];
                heap[root] = heap[temp];
                heap[temp] = swapValue;
            }
            temp = root;
        } while (temp != 0);

    }
    printf("\n");

    printf("Max Heap array= [");

    for (i = 0; i < array_size; i++) {


        printf("%d  ", heap[i]);

    }
    printf(" ]");

    return 0;
}