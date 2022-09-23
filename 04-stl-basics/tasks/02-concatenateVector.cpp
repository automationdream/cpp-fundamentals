#include <iostream>
#include <vector>

// It should take 2 vectors and return one which has alternately elements from the first and the other one.
std::vector<int> concatenateVector(const std::vector<int> &vec1, const std::vector<int> &vec2) {
    std::vector<int> vec;
    int i = 0;

    for (const auto element:vec1) {
        vec.push_back(vec1[i]);
        vec.push_back(vec2[i]);
        i++;
    }
    return vec;
};

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
