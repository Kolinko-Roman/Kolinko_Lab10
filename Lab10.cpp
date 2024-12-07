#include <iostream>
#include <string>
#include <regex>
using namespace std;
int main() {
    string text = "У цьому тексті є числа: 123.45, -67.89, 0.1, .5, 3.14159 та інші.";
    regex floatRegex(R"([-+]?\d*\.?\d+)");
    smatch matches;
    cout << "Числа з плаваючою комою в тексті:\n";
    auto begin = sregex_iterator(text.begin(), text.end(), floatRegex);
    auto end = sregex_iterator();
    for (auto it = begin; it != end; ++it) {
        cout << it->str() << endl;
    }
    return 0;
}
