#include <iostream>
using namespace std;


void insertionSort(int, int);
void printArray(int , int);



void insertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i- 1;

      
        while (j >= 0 && key < array[j]) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}


void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = { 9, 5, 1, 4, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    cout << "Sorted array:\n";
    printArray(arr, size);
}