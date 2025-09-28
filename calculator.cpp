cpp

#include "calculator.h"

// Документація для функції додавання
int Calculator::Add (double a, double b)
{
    return a + b;
}

// Функція віднімання. Викликає функцію Add.
int Calculator::Sub (double a, double b)
{
    // Fix: Missing closing brace was corrected.
    return a + -b; // Змінено на 'a + -b' для відповідності 'Add(a, -b)'
}

// Документація для функції множення
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
