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