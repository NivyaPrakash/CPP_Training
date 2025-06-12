#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::istream_iterator<int> inIt(std::cin);        // begin of input stream
    std::istream_iterator<int> endIt;                 // end-of-stream iterator

    std::vector<int> numbers(inIt, endIt);            // reads until EOF (Ctrl+Z in Windows or Ctrl+D in Linux)

    for (int n : numbers) {
        std::cout << n << " ";
    }

    return 0;
}