// Merge sort in C

#include <stdio.h>

void merge(int arr[], int x, int y, int z) {

  int n1 = y - x + 1;
  int n2 = z - y;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[x + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[y + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = x;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int z) {
  if (l < z) {

    int m = l + (z - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, z);

    merge(arr, l, m, z);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  printf("Sorted array: \n");
  printArray(arr, size);
}
