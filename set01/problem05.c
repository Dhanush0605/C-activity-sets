#include <stdio.h>
int input() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    return x;
}


int compare(int a, int b, int c) {
    int largest = a;

    if (b > largest) {
       largest = b;
    }

    if (c > largest) {
       largest = c;
    }

    return largest;
}
void output(int a, int b, int c, int largest) {
   printf("The largest number among them is: %d\n", largest);
}

int main() {
    int num1, num2, num3, largest;
    num1 = input();
    num2 = input();
    num3 = input();
    largest = compare(num1, num2, num3);
    output(num1, num2, num3, largest);
    return 0;
}
