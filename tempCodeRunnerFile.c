int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  
  printf("Original array\n");
  display(arr, size);
  
  mergeSort(arr, 0, size - 1);

  printf("Sorted array\n");
  display(arr, size);
  return 0;
}