#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> fl = { 10, 20, 30 };

    // Insert at front
    fl.push_front(5);

    std::cout << "Elements: ";
    for (int n : fl)
        std::cout << n << " ";
    std::cout << "\n";

    // Inserting after a specific position
    auto it = fl.before_begin();  // Special iterator before the first element
    fl.insert_after(it, 1);       // Insert 1 before 5

    std::cout << "After insert_after: ";
    for (int n : fl)
        std::cout << n << " ";
    std::cout << "\n";

    // Remove specific value
    fl.remove(20);

    std::cout << "After remove(20): ";
    for (int n : fl)
        std::cout << n << " ";
    std::cout << "\n";

    // Sort
    fl.sort();
    std::cout << "After sort: ";
    for (int n : fl)
        std::cout << n << " ";
    std::cout << "\n";

    return 0;
}