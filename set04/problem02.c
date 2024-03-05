#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

// Function to compare two fractions
int compareFractions(Fraction frac1, Fraction frac2) {
    return frac1.num * frac2.den - frac2.num * frac1.den;
}

// Function to find the smallest fraction among three fractions
Fraction findSmallestFraction(Fraction frac1, Fraction frac2, Fraction frac3) {
    if (compareFractions(frac1, frac2) <= 0 && compareFractions(frac1, frac3) <= 0) {
        return frac1;
    } else if (compareFractions(frac2, frac1) <= 0 && compareFractions(frac2, frac3) <= 0) {
        return frac2;
    } else {
        return frac3;
    }
}

int main() {
    Fraction frac1, frac2, frac3;
    
    // Input three fractions
    printf("Enter the first fraction (numerator denominator): ");
    scanf("%d %d", &frac1.num, &frac1.den);
    
    printf("Enter the second fraction (numerator denominator): ");
    scanf("%d %d", &frac2.num, &frac2.den);
    
    printf("Enter the third fraction (numerator denominator): ");
    scanf("%d %d", &frac3.num, &frac3.den);
    
    // Find the smallest fraction
    Fraction smallest = findSmallestFraction(frac1, frac2, frac3);
    
    // Output the result
    printf("The smallest of %d/%d, %d/%d, and %d/%d is %d/%d\n", 
           frac1.num, frac1.den, frac2.num, frac2.den, frac3.num, frac3.den, smallest.num, smallest.den);

    return 0;
}
