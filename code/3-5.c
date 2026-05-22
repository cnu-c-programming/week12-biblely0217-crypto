#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    int num;
    int sum = 0;

    while (1) {
        int result = fscanf(fp, "%d", &num);

        if (result == EOF) {
            break;
        }

        if (result == 1) {
            sum += num;
        }
        else {
            char buf[256];
            fscanf(fp, "%s", buf);
            fprintf(stderr, "invalid value: %s\n", buf);
        }
    }

    printf("sum: %d\n", sum);

    fclose(fp);

    return 0;
}