#include <iostream>
#include "greeter.hpp"
#include "templates.hpp"

using namespace std;

int main() {
    wcout << greeting(L"World") << endl;

    wcout << L"The maximum of 2 and 5 is " << GetMax <int> (2, 5) << endl;
}
