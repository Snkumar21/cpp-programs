#include<iostream>

inline int max (int a, int b) {
    return(a > b) ? a : b;
}

inline int min (int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;

    std::cout << "Enter the first number : ";
    std::cin >> num1;

    std::cout << "Enter the second number : ";
    std::cin >> num2;

    std::cout << "Maximum of " << num1 << " and " << num2 << " is : " << max(num1, num2) << std::endl;
    std::cout << "Minimum of " << num1 << " and " << num2 << " is : " << min(num1, num2) << std::endl;

    return 0;
}