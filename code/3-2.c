#include <stdio.h>

int main(int argc, const char* argv[]) {
    
    if (argc < 2)
        return 0;
    
    const char* filename = argv[1];
    char buffer[10] = {0};

    FILE* fp = fopen(filename, "r");

    fscanf(fp, "%9s", buffer);

    printf("%s\n", buffer);

    fclose(fp);

    return 0;
}
