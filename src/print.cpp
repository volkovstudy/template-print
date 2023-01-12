#ifndef TEMPLATE_PRINT_PRINT_CPP
#define TEMPLATE_PRINT_PRINT_CPP


#include <iostream>
#include <string>

using namespace std;

template<typename Container>
void Print(const Container& container, const string& delimiter) {
    for (const auto& item: container) {
        cout << item << delimiter;
    }
    cout << endl;
}


#endif
