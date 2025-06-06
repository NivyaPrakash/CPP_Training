#include <iostream>
#include <list>
#include <algorithm>

void printList(const std::list<int>& lst) {
    for (int val : lst) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}

int main() {
    std::list<int> myList = { 10, 20, 30 };

    myList.push_front(5);      // Add at front
    myList.push_back(40);      // Add at back

    std::cout << "After push_front and push_back:\n";
    printList(myList);

    myList.pop_front();        // Remove from front
    myList.pop_back();         // Remove from back

    std::cout << "After pop_front and pop_back:\n";
    printList(myList);

    auto it = myList.begin();
    std::advance(it, 1);       // Move iterator to second element
    myList.insert(it, 15);     // Insert before 2nd element

    std::cout << "After insert at 2nd position:\n";
    printList(myList);

    it = myList.begin();
    std::advance(it, 1);
    myList.erase(it);          // Erase 2nd element

    std::cout << "After erase at 2nd position:\n";
    printList(myList);

    myList.push_back(25);
    myList.push_back(5);
    myList.push_back(20);
    std::cout << "Before sorting:\n";
    printList(myList);

    myList.sort();             // Sort list
    std::cout << "After sort:\n";
    printList(myList);

    myList.unique();           // Remove consecutive duplicates
    std::cout << "After unique:\n";
    printList(myList);

    myList.reverse();          // Reverse the list
    std::cout << "After reverse:\n";
    printList(myList);

    return 0;
}
