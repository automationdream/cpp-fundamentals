#include <iostream>

void printString(const std::string &str, int rep) {
    if (rep < 0) {
        std::cout << "Function accepts only positive values." << "\n";
    } else {
        for (size_t i = 0; i < rep; i++) {
            std::cout << str << "\n";
        };
    }

};

int main() {
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    printString("HiHi ", -1);
    std::cout << "\n";

    return 0;
}
