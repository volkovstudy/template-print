#ifndef TEMPLATE_PRINT_PRINT_CPP
#define TEMPLATE_PRINT_PRINT_CPP


#include <iostream>
#include <string>

using namespace std;

template<typename Container>
void Print(const Container& container, const string& delimiter) {
    bool isItFirst = true;

    for (const auto& item: container) {
        if (isItFirst) {
            isItFirst = false;
        } else {
            cout << delimiter;
        }

        cout << item;
    }

    cout << endl;
}


#endif
