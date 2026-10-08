#include <iostream>
#include <vector>

int main() {
    std::vector<int> v{10, 20, 30};
    for (int x : v) {
        std::cout << x << '\n';
    }

    return 0;
}