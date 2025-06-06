#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";

    // Concatenation
    std::string str3 = str1 + " " + str2;
    std::cout << "Concatenated: " << str3 << "\n";

    // Append
    str3.append("!");
    std::cout << "Appended: " << str3 << "\n";

    // Access
    std::cout << "First character: " << str3[0] << "\n";

    // Length
    std::cout << "Length: " << str3.length() << "\n";

    // Substring
    std::string sub = str3.substr(6, 5);
    std::cout << "Substring: " << sub << "\n";

    // Find
    size_t pos = str3.find("World");
    if (pos != std::string::npos)
        std::cout << "'World' found at position: " << pos << "\n";

    // Replace
    str3.replace(6, 5, "Universe");
    std::cout << "After replace: " << str3 << "\n";

    // Compare
    if (str1 == "Hello")
        std::cout << "str1 equals 'Hello'\n";

    // Clear
    str1.clear();
    std::cout << "str1 after clear (length): " << str1.length() << "\n";

    return 0;
}



#include <iostream>
#include <string>

int main() {
    std::string s = "DataStructures";

    s.insert(4, " & Algorithms");
    std::cout << "Insert: " << s << "\n";

    s.erase(4, 15);
    std::cout << "Erase: " << s << "\n";

    s.replace(4, 3, "Science");
    std::cout << "Replace: " << s << "\n";

    std::string sub = s.substr(0, 4);
    std::cout << "Substring: " << sub << "\n";

    if (s.find("Science") != std::string::npos)
        std::cout << "Found 'Science'!\n";

    std::string copy = s;
    std::cout << "Compare: " << s.compare(copy) << " (equal)\n";

    return 0;
}
