#include <iostream>

int max(int a, int b, int c){
    int max_value;
    if (a >= b) {
        max_value = a;
    } else {
        max_value = b;
    }

    if (max_value < c) {
        max_value = c;
    }

    return max_value;

};

int main() {
    std::cout << "max (1, 2, 3): " << max (1, 2, 3) << "\n";
    std::cout << "max (1, 3, 2): " << max (1, 3, 2) << "\n";
    std::cout << "max (2, 3, 1): " << max (2, 3, 1) << "\n";
    std::cout << "max (2, 1, 3): " << max (2, 1, 3) << "\n";
    std::cout << "max (3, 2, 1): " << max (3, 2, 1) << "\n";
    std::cout << "max (3, 1, 2): " << max (3, 1, 2) << "\n";

    return 0;
}
