#include <stdio.h>

int input_side() {
    int side;
    printf("Enter the length of the side: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c)
        return 1; // Scalene
    else
        return 0; // Not Scalene
}

void output(int a, int b, int c, int is_scalene) {
    printf("Triangle with sides %d, %d, %d is ", a, b, c);
    if (is_scalene)
        printf("a scalene triangle.\n");
    else
        printf("not a scalene triangle.\n");
}

int main() {
    int side1, side2, side3;
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();

    int is_scalene = check_scalene(side1, side2, side3);
    output(side1, side2, side3, is_scalene);

    return 0;
}
