<<<<<<< HEAD
#include <stdio.h>

=======
#include<stdio.h>
>>>>>>> c1ffc74eeaa9059431174949411a077e37e8890d
struct _complex {
    float real;
    float imaginary;
};

typedef struct _complex Complex;

<<<<<<< HEAD
Complex input_complex() {
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("Complex A: %.2f + %.2fi\n", a.real, a.imaginary);
    printf("Complex B: %.2f + %.2fi\n", b.real, b.imaginary);
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);
}

int main() {
    Complex complexA, complexB, result;

    printf("Enter values for Complex A:\n");
    complexA = input_complex();

    printf("Enter values for Complex B:\n");
    complexB = input_complex();

    result = add_complex(complexA, complexB);

    printf("Result:\n");
    output(complexA, complexB, result);

return 0;
}
=======
Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

    int main() {
    Complex num1, num2, sum;

    printf("Enter the first complex number:\n");
    num1 = input_complex(); 
    printf("\nEnter the second complex number:\n");
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
    printf("\n Sum of ");
    printf("(%.2f + %.2fi) and ", a.real, a.imaginary);
    }
>>>>>>> c1ffc74eeaa9059431174949411a077e37e8890d
