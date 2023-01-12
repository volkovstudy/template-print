#include <vector>
#include <sstream>
#include "TestRunner.h"

void testContainerWithIntegersAndCommaDelimiter();
void testContainerWithStringsAndCommaDelimiter();

void TestRunner::runAllTests() {
    testContainerWithIntegersAndCommaDelimiter();
    testContainerWithStringsAndCommaDelimiter();
}

void testContainerWithIntegersAndCommaDelimiter() {
    // Given
    vector<int> container = {1, 2, 3, 4};
    string delimiter = ", ";

    std::ostringstream oss;
    std::streambuf* coutStreambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());

    // When
    Print(container, delimiter);

    std::cout.rdbuf(coutStreambuf);

    // Check
    assert(oss.str() == "1, 2, 3, 4\n");

    cout << "Test with integers passed" << endl;
}

void testContainerWithStringsAndCommaDelimiter() {
    // Given
    vector<string> container = {"a", "b", "c", "d"};
    string delimiter = ", ";

    std::ostringstream oss;
    std::streambuf* coutStreambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());

    // When
    Print(container, delimiter);

    std::cout.rdbuf(coutStreambuf);

    // Check
    assert(oss.str() == "a, b, c, d\n");

    cout << "Test with strings passed" << endl;
}
