#include <stdio.h>

void rotate(int arr[], int n, int k) {
  int i, temp;
  for(i=0; i<k; i++) {
    temp = arr[n-1];
    
    for(int j=n-1; j>0; j--) {
      arr[j] = arr[j-1];
    }
    
    arr[0] = temp;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 3;

  rotate(arr, n, k);

  for(int i=0; i<n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}