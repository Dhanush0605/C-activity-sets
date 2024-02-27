#include <stdio.h>
struct _complex {
    float real;
    float imaginary;
};

typedef struct _complex Complex; 

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

    int main() {
    Complex num1, num2, sum;

    printf("Enter first complex number:\n");
    num1 = input_complex();

    printf("Enter second complex number:\n");
    num2 = input_complex();

    sum = add_complex(num1, num2);

    output(num1, num2, sum);

    return 0;
}

    Complex input_complex() {
    Complex num;
    printf("Enter real part: ");
    scanf("%f", &num.real);
    printf("Enter imaginary part: ");
    scanf("%f", &num.imaginary);
    return num;
}

    Complex add_complex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

    void output(Complex a, Complex b, Complex sum) {
    printf("Sum of ");
    printf("(%.2f + %.2fi) and ", a.real, a.imaginary);
    printf("(%.2f + %.2fi) is ", b.real, b.imaginary);
    printf("(%.2f + %.2fi)\n", sum.real, sum.imaginary);
}


