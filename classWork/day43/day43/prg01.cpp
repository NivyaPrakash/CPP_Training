#include <fstream>
#include <iterator>
#include <algorithm>

int main() {
    std::ifstream inFile("input.txt");
    std::ofstream outFile("output.txt");

    std::istream_iterator<std::string> inIt(inFile), endIt;
    std::ostream_iterator<std::string> outIt(outFile, "\n");

    std::copy(inIt, endIt, outIt);

    return 0;
}