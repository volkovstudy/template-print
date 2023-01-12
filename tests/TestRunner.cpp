#include <vector>
#include <sstream>
#include "TestRunner.h"

void testContainerWithIntegersAndCommaDelimiter();

void TestRunner::runAllTests() {
    testContainerWithIntegersAndCommaDelimiter();
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
