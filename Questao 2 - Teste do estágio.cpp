#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100]; 
    int i, count = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0'; 

    for (i = 0; i < strlen(str); i++) {
        if (tolower(str[i]) == 'a') {
            count++;
        }
    }

    if (count > 0) {
        printf("A letra 'a' existe na string e ocorre %d vezes.\n", count);
    } else {
        printf("A letra 'a' não existe na string.\n");
    }

    return 0;
}
