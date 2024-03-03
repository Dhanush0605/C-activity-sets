#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main() {
    char string[100], substring[100];
    input_string(string, substring);
    int index = sub_str_index(string, substring);
    output(string, substring, index);
    return 0;
}

void input_string(char* a, char* b) {
    printf("Enter the main string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}

int sub_str_index(char* string, char* substring) {
    int string_length = strlen(string);
    int sub_length = strlen(substring);

    for (int i = 0; i <= string_length - sub_length; i++) {
        int j;
        for (j = 0; j < sub_length; j++) {
            if (string[i + j] != substring[j])
                break;
        }
        if (j == sub_length) 
            return i;
    }
    return -1;
}

void output(char *string, char *substring, int index) {
    if (index != -1)
        printf("The index of '%s' in '%s' is %d\n", substring, string, index);
    else
        printf("'%s' not found in '%s'\n", substring, string);
}
