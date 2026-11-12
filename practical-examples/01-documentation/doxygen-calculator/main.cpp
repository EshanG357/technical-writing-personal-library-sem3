/**
 * @file main.cpp
 * @brief A small calculator demonstrating Doxygen documentation.
 */

#include <iostream>

/**
 * @brief Adds two numbers.
 * @param a First operand.
 * @param b Second operand.
 * @return The sum of the operands.
 */
double add(double a, double b) {
    return a + b;
}

/**
 * @brief Subtracts the second number from the first.
 * @param a First operand.
 * @param b Second operand.
 * @return The difference between the operands.
 */
double subtract(double a, double b) {
    return a - b;
}

/**
 * @brief Multiplies two numbers.
 * @param a First operand.
 * @param b Second operand.
 * @return The product of the operands.
 */
double multiply(double a, double b) {
    return a * b;
}

/**
 * @brief Divides the first number by the second.
 * @param a Numerator.
 * @param b Denominator.
 * @return The quotient.
 * @throws No exception; division by zero is reported by the caller.
 */
double divide(double a, double b) {
    return a / b;
}

/**
 * @brief Program entry point.
 * @return 0 when the program completes successfully.
 */
int main() {
    const double first = 20.0;
    const double second = 5.0;

    std::cout << "Addition: " << add(first, second) << '\n';
    std::cout << "Subtraction: " << subtract(first, second) << '\n';
    std::cout << "Multiplication: " << multiply(first, second) << '\n';

    if (second != 0.0) {
        std::cout << "Division: " << divide(first, second) << '\n';
    } else {
        std::cout << "Division by zero is undefined.\n";
    }

    return 0;
}
