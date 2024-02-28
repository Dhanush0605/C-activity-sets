#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int input() {
    int num;
    scanf("%d", &num);
    return num;
}

int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void output(int a, int b, int gcd) {
    printf("The GCD of %d and %d is: %d\n", a, b, gcd);
}

int main() {
    printf("Enter the first number: ");
    int num1 = input();
    printf("Enter the second number: ");
    int num2 = input();

    int gcd = find_gcd(num1, num2);

    output(num1, num2, gcd);

    return 0;
}
