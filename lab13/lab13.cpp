#include <iostream>


int calculateTerm(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return 2 * calculateTerm(n - 1);
    }
}

int main() {
    int n;

    std::cout << "Enter the term number (n) to calculate: ";
    std::cin >> n;

    if (n < 1 || n > 9) {
        std::cout << "The term number should be between 1 and 9." << std::endl;
        return 1;
    }

    int result = calculateTerm(n);
    std::cout << "The " << n << "-th term of the series is: " << result << std::endl;

    return 0;
}
