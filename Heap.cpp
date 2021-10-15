/* Mahady Hasan Miraz
  ID: 1935202037  */

#include <bits/stdc++.h>
using namespace std;

void MaxHeap(int arr[], int n) 
{ 
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > arr[(i - 1) / 2]) 
        {
            int j = i;
            while (arr[j] > arr[(j - 1) / 2])
            {
                swap(arr[j], arr[(j - 1) / 2]);
                j = (j - 1) / 2;
            }
        }
    }
}
  
void heapSort(int arr[], int n) 
{
    MaxHeap(arr, n);
  
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
      
        int j = 0, index; 
        do
        {
            index = (2 * j + 1);
            if (arr[index] < arr[index + 1] && index < (i - 1)) 
                index++;
            
            if (arr[j] < arr[index] && index < i)
                swap(arr[j], arr[index]);
          
            j = index;
          
        } while (index < i);
    }
}

int main() 
{
    int arr[] = {20, 84, 12, 36, 55, 47};
    int n = sizeof(arr) / sizeof(arr[0]);
      
    printf("Given array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    heapSort(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
  
    return 0;
}