#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int w, h;
    std::cin >> w >> h;
    w = w + 8;
    h = h * 3;
    std::cout << w << std::endl << h << std::endl << w * h;
    return 0;
}