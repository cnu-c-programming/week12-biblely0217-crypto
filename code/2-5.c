#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 3)
        return 0;

    FILE* src = fopen(argv[1], "r");
    FILE* dest = fopen(argv[2], "w");

    char ch;

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    return 0;
}
