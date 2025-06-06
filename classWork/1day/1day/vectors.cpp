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



#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;

    v.assign(5, 10); // 5 elements of value 10
    std::cout << "After assign: ";
    for (auto x : v) std::cout << x << " ";
    std::cout << "\n";

    v.push_back(20);
    v.emplace_back(25); // Similar to push_back but in-place
    std::cout << "After push_back and emplace_back: ";
    for (auto x : v) std::cout << x << " ";
    std::cout << "\n";

    v.insert(v.begin() + 2, 15);
    v.emplace(v.begin() + 3, 17);
    std::cout << "After insert and emplace: ";
    for (auto x : v) std::cout << x << " ";
    std::cout << "\n";

    v.erase(v.begin() + 1);
    std::cout << "After erase at index 1: ";
    for (auto x : v) std::cout << x << " ";
    std::cout << "\n";

    v.resize(3);
    std::cout << "After resize to 3: ";
    for (auto x : v) std::cout << x << " ";
    std::cout << "\n";

    std::cout << "Capacity: " << v.capacity() << "\n";
    std::cout << "Size: " << v.size() << "\n";

    v.shrink_to_fit();
    std::cout << "After shrink_to_fit, Capacity: " << v.capacity() << "\n";

    std::vector<int> v2 = { 1, 2, 3 };
    v.swap(v2);
    std::cout << "After swap with v2: ";
    for (auto x : v) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}