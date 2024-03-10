#include <stdio.h>
#include <string.h>

// Function to input the string
void input_string(char *a) {
    printf("Enter a string: ");
    fgets(a, 100, stdin);
}

// Function to count the number of words in the string
int count_words(char *string) {
    char *token;
    int count = 0;

    // Get the first token
    token = strtok(string, " ");

    // Count tokens until strtok returns NULL
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }

    return count;
}

// Function to output the result
void output(char *string, int no_words) {
    printf("The number of words in \"%s\" is %d\n", string, no_words);
}

int main() {
    char string[100];
    input_string(string);
    int no_words = count_words(string);
    output(string,no_words);
    return 0;
}
