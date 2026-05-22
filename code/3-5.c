#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    int num;
    int sum = 0;

    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
    }

    printf("sum: %d\n", sum);

    fclose(fp);

    return 0;
}