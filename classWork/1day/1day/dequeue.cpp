#include <iostream>
#include <deque>
#include <algorithm>

void printDeque(const std::deque<int>& dq) {
    for (int num : dq)
        std::cout << num << " ";
    std::cout << "\n";
}

int main() {
    std::deque<int> dq = { 10, 20, 30 };

    // Insert at both ends
    dq.push_front(5);
    dq.push_back(40);

    std::cout << "After push_front and push_back: ";
    printDeque(dq);

    // Access elements
    std::cout << "Front: " << dq.front() << "\n";
    std::cout << "Back: " << dq.back() << "\n";
    std::cout << "Element at index 2: " << dq.at(2) << "\n";

    // Remove from both ends
    dq.pop_front();
    dq.pop_back();
    std::cout << "After pop_front and pop_back: ";
    printDeque(dq);

    // Insert at specific position
    dq.insert(dq.begin() + 1, 15);
    std::cout << "After insert at index 1: ";
    printDeque(dq);

    // Erase element at specific position
    dq.erase(dq.begin() + 2);
    std::cout << "After erase at index 2: ";
    printDeque(dq);

    // Resize deque
    dq.resize(6, 99);
    std::cout << "After resize to 6: ";
    printDeque(dq);

    // Sort elements
    std::sort(dq.begin(), dq.end());
    std::cout << "After sorting: ";
    printDeque(dq);

    // Clear all elements
    dq.clear();
    std::cout << "Size after clear: " << dq.size() << "\n";

    return 0;
}

#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    dq.assign(5, 100); // 5 elements with value 100
    std::cout << "After assign: ";
    for (int x : dq) std::cout << x << " ";
    std::cout << "\n";

    dq.push_back(200);
    dq.push_front(50);
    dq.emplace_back(300);
    dq.emplace_front(25);
    std::cout << "After push and emplace: ";
    for (int x : dq) std::cout << x << " ";
    std::cout << "\n";

    dq.insert(dq.begin() + 2, 150);
    dq.emplace(dq.begin() + 3, 175);
    std::cout << "After insert and emplace: ";
    for (int x : dq) std::cout << x << " ";
    std::cout << "\n";

    dq.erase(dq.begin() + 1);
    std::cout << "After erase: ";
    for (int x : dq) std::cout << x << " ";
    std::cout << "\n";

    dq.resize(4);
    std::cout << "After resize: ";
    for (int x : dq) std::cout << x << " ";
    std::cout << "\n";

    dq.swap(std::deque<int>{1, 2, 3});
    std::cout << "After swap: ";
    for (int x : dq) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}