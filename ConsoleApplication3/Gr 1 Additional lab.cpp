#include <iostream>
// BEKZAT KUMMAR TASK4
bool is_triangle(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        return false;
    }
    return true;
}

int main() {
    // Valid triangles
    std::cout << is_triangle(3, 4, 5) << std::endl;  // true
    std::cout << is_triangle(5, 12, 13) << std::endl;  // true
    std::cout << is_triangle(7, 24, 25) << std::endl;  // true

    // Invalid triangles
    std::cout << is_triangle(1, 2, 5) << std::endl;  // false
    std::cout << is_triangle(5, 10, 25) << std::endl;  // false
    std::cout << is_triangle(7, 8, 15) << std::endl;  // false

    // Zero-length side
    std::cout << is_triangle(0, 4, 5) << std::endl;  // false
    std::cout << is_triangle(3, 0, 5) << std::endl;  // false
    std::cout << is_triangle(3, 4, 0) << std::endl;  // false

    // Negative-length side
    std::cout << is_triangle(-3, 4, 5) << std::endl;  // false
    std::cout << is_triangle(3, -4, 5) << std::endl;  // false
    std::cout << is_triangle(3, 4, -5) << std::endl;  // false

    // Equilateral triangles
    std::cout << is_triangle(3, 3, 3) << std::endl;  // true

    // Isosceles triangles
    std::cout << is_triangle(5, 5, 8) << std::endl;  // true
    std::cout << is_triangle(7, 10, 7) << std::endl;  // true

    return 0;
}
