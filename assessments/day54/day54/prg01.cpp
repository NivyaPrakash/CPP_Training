#include<iostream>
using namespace std;

int binarySearch(int array[], int x, int start, int end)
{
    while (start <= end) 
    {
        int mid = start + (end-start) / 2;
        if (array[mid] == x)
            return mid;
        if (array[mid] < x)
            start = mid + 1;
        else
            end= mid - 1;
    }
    return -1;
}

int main()
{
    int array[] = { 2, 3, 4, 10, 40 };
    int x = 15;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array,x, 0, n - 1);
    if (result == -1)
        cout << "Element is not present in array";
    else 
        cout << "Element is present at index "<<result;
    return 0;
}