#include <iostream>
#include <array>
#include <algorithm>
#include <numeric> // for accumulate

int main() {
    // Step 1: Initialize std::array with student grades
    std::array<int, 10> grades = { 78, 92, 35, 44, 89, 55, 67, 29, 49, 100 };

    std::cout << "Original Grades (Reverse Order): ";
    // Step 2: Traverse in reverse using reverse_iterator
    for (std::array<int, 10>::reverse_iterator rit = grades.rbegin(); rit != grades.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << "\n";

    // Step 3: Fix failing grades (<40) using forward iterator
    for (std::array<int, 10>::iterator it = grades.begin(); it != grades.end(); ++it) {
        if (*it < 40) {
            *it = 40; // Replace with minimum pass mark
        }
    }

    std::cout << "Grades after fixing failures: ";
    for (int g : grades) std::cout << g << " ";
    std::cout << "\n";

    // Step 4: Count how many passed (>=50) using const_iterator
    int pass_count = 0;
    for (std::array<int, 10>::const_iterator cit = grades.cbegin(); cit != grades.cend(); ++cit) {
        if (*cit >= 50) ++pass_count;
    }
    std::cout << "Number of students who passed: " << pass_count << "\n";

    // Step 5: Sort using STL algorithm
    std::sort(grades.begin(), grades.end());

    std::cout << "Sorted Grades: ";
    for (int g : grades) std::cout << g << " ";
    std::cout << "\n";

    return 0;
}