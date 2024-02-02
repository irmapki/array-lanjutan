#include <stdio.h>

int main() {
  int arr[] = {20, 20, 10, 3, 6, 7, 8, 10, 5, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Array duplikat: ");

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        printf("%d ", arr[i]);
        break;  
      }
    }
  }

  return 0;
}
