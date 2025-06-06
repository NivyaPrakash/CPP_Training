#include <iostream>
#include <vector>
#include <algorithm>

void printVector(const std::vector<int>& v) {
    for (int num : v) std::cout << num << " ";
    std::cout << "\n";
}

int main() {
    std::vector<int> vec = { 10, 20, 30 };

    // Add elements
    vec.push_back(40);
    vec.push_back(50);

    std::cout << "Vector after push_back: ";
    printVector(vec);

    // Access elements
    std::cout << "Element at index 2: " << vec.at(2) << "\n";
    std::cout << "Front: " << vec.front() << "\n";
    std::cout << "Back: " << vec.back() << "\n";

    // Remove last element
    vec.pop_back();
    std::cout << "After pop_back: ";
    printVector(vec);

    // Insert at specific position
    vec.insert(vec.begin() + 1, 15);
    std::cout << "After insert at position 1: ";
    printVector(vec);

    // Erase element at position 2
    vec.erase(vec.begin() + 2);
    std::cout << "After erase at position 2: ";
    printVector(vec);

    // Resize
    vec.resize(6, 100);
    std::cout << "After resize to 6: ";
    printVector(vec);

    // Sorting
    std::sort(vec.begin(), vec.end());
    std::cout << "After sorting: ";
    printVector(vec);

    // Clear
    vec.clear();
    std::cout << "Size after clear: " << vec.size() << "\n";

    return 0;
}