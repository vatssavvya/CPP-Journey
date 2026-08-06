#include <iostream>

int main() {
    int var1 = 1;
    int var2 = 3;
    int temp = var1;
    int var1 = var2;
    int var2 = temp;
    std::cout << var1 + var2;
    return 0;
}
