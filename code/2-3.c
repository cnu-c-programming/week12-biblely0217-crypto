#include <stdio.h>
#include <time.h>

int main(int argc, const char* argv[]) {
    FILE* fp = fopen("log.txt", "a");

    time_t now = time(NULL);

    fprintf(fp, "program executed: %s", ctime(&now));

    fclose(fp);

    return 0;
}