#include <stdio.h>

int sequence1(int* seq) {
    return seq[3] + 2;
}

int sequence2(int* seq) {
    return seq[5] * 2;
}

int sequence3(int* seq) {
    return seq[6] + 13;
}

int sequence4(int* seq) {
    return seq[3] + 36;
}

int sequence5(int* seq) {
    return seq[5] + 5;
}

int sequence6(int* seq) {
    return seq[6] + 1;
}

int main() {
    int option;
    printf("Choose an option:\n");
    printf("1. 1, 3, 5, 7, ...\n");
    printf("2. 2, 4, 8, 16, 32, 64, ...\n");
    printf("3. 0, 1, 4, 9, 16, 25, 36, ...\n");
    printf("4. 4, 16, 36, 64, ...\n");
    printf("5. 1, 1, 2, 3, 5, 8, ...\n");
    printf("6. 2, 10, 12, 16, 17, 18, 19, ...\n");
    scanf("%d", &option);

    int sequence[7] = {0};
    int next_element;

    if (option == 1) {
        sequence[0] = 1;
        sequence[1] = 3;
        sequence[2] = 5;
        sequence[3] = 7;
        next_element = sequence1(sequence);
    } else if (option == 2) {
        sequence[0] = 2;
        sequence[1] = 4;
        sequence[2] = 8;
        sequence[3] = 16;
        sequence[4] = 32;
        sequence[5] = 64;
        next_element = sequence2(sequence);
    } else if (option == 3) {
        sequence[0] = 0;
        sequence[1] = 1;
        sequence[2] = 4;
        sequence[3] = 9;
        sequence[4] = 16;
        sequence[5] = 25;
        sequence[6] = 36;
        next_element = sequence3(sequence);
    } else if (option == 4) {
        sequence[0] = 4;
        sequence[1] = 16;
        sequence[2] = 36;
        sequence[3] = 64;
        next_element = sequence4(sequence);
    } else if (option == 5) {
        sequence[0] = 1;
        sequence[1] = 1;
        sequence[2] = 2;
        sequence[3] = 3;
        sequence[4] = 5;
        sequence[5] = 8;
        next_element = sequence5(sequence);
    } else if (option == 6) {
        sequence[0] = 2;
        sequence[1] = 10;
        sequence[2] = 12;
        sequence[3] = 16;
        sequence[4] = 17;
        sequence[5] = 18;
        sequence[6] = 19;
        next_element = sequence6(sequence);
    } else {
        printf("Invalid option\n");
        return 1;
    }

    printf("The next element in the sequence is: %d\n", next_element);

    return 0;
}
