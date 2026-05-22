#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "myfile.txt";

    char buf1[10] = {0};
    char buf2[10] = {0};

    FILE* fp1 = fopen(filename, "r");
    FILE* fp2 = fopen(filename, "w");

    char* ret1 = fgets(buf1, sizeof(buf1), fp1);
    char* ret2 = fgets(buf2, sizeof(buf2), fp2);

    printf("fp1 %s %p %d %d\n",
        buf1,
        ret1,
        ferror(fp1),
        feof(fp1));

    printf("fp2 %s %p %d %d\n",
        buf2,
        ret2,
        ferror(fp2),
        feof(fp2));

    fclose(fp1);
    fclose(fp2);

    return 0;
}