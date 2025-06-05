#include <iostream>
#include <array>

void displayArray(const std::array<int, 5>& arr) {
    std::cout << "Array elements: ";
    for (auto x : arr) std::cout << x << " ";
    std::cout << "\n";
}

int main() {
    std::array<int, 5> arr1 = { 1, 2, 3, 4, 5 };
    std::array<int, 5> arr2;

    std::cout << "Original arr1: ";
    displayArray(arr1);

    // Using fill()
    arr2.fill(9);
    std::cout << "After fill, arr2: ";
    displayArray(arr2);

    // Using swap
    arr1.swap(arr2);
    std::cout << "After swap, arr1: ";
    displayArray(arr1);
    std::cout << "After swap, arr2: ";
    displayArray(arr2);

    // Access using at(), front(), back()
    std::cout << "arr1.at(2): " << arr1.at(2) << std::endl;
    std::cout << "arr1.front(): " << arr1.front() << std::endl;
    std::cout << "arr1.back(): " << arr1.back() << std::endl;

    // Use data() to manipulate array directly
    int* ptr = arr1.data();
    ptr[0] = 100;
    std::cout << "After modifying via data(): ";
    displayArray(arr1);

    return 0;
}
