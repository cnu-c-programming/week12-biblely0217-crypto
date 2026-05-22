#include <stdio.h>
#include <time.h>

int main(int argc, const char* argv[]) {
    FILE* fp = fopen("log.txt", "a");

    if (fp == NULL)
        return 0;

    time_t now = time(NULL);

    fprintf(fp, "success\n");

    fclose(fp);

    return 0;
}