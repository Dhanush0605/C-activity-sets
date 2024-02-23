<<<<<<< HEAD
//2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int a , b , sum;
    printf("enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("the sum of %d + %d is %d" , a, b, a+b);
=======
//2. Write a C program to add two number
int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of %d and %d is %d\n", num1, num2, sum);

>>>>>>> c1ffc74eeaa9059431174949411a077e37e8890d
    return 0;
}