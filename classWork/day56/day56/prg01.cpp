
#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int min_idx = i;
    for (int j = i + 1; j < size; j++) {

      if (array[j] < array[min_idx])
        min_idx = j;
    }

    
    swap(&array[min_idx], &array[i]);
  }
}


int main() {
  int arr[] = {20, 12, 10, 15, 2};
  int size = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, size);
  cout << "Sorted array:\n";
  printArray(arr, size);
}