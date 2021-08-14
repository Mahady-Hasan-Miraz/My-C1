#include<stdio.h>
int main()
{
    int i, n, Arr[]={5,10,3,25,3,67,45};


    n = sizeof(Arr)/sizeof(Arr[0]);

    //Now sort
    sort(Arr, 0, n-1);

    //Print sorted Array
    printf("Sorted Element : ");
    for(i=0;i<n;i++)
    printf("%d ",Arr[i]);
    return 0;
}

void sort(int Arr[50], int First, int Last)
{
    int pivot,temp,first, last;

    if(First<Last)
    {
        pivot=First;
        first=First;
        last=Last;

        while(first<last)
        {
            while(Arr[first]<=Arr[pivot] && first<Last)
            first++;

            while(Arr[last]>Arr[pivot])
            last--;

            if(first<last)
            {
                temp=Arr[first];
                Arr[first]=Arr[last];
                Arr[last]=temp;
            }
        }
        temp=Arr[pivot];
        Arr[pivot]=Arr[last];
        Arr[last]=temp;
        sort(Arr, First, last-1);
        sort(Arr, last+1, Last);
    }
}
