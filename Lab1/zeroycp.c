#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if(argc!=3) {
        puts("Usage: ./zeroycp source_file_path destination_file_path");
        exit(0);
    }
    FILE* fp1 = freopen(argv[1], "r", stdin);
    if (!fp1) {
        fprintf(stderr, "The source file does not exist!");
        exit(0);
    }
    FILE* fp2 = freopen(argv[2], "w", stdout);
    if(!fp2) {
        fprintf(stderr, "Failed to open the destination file!");
        exit(0);
    }
    char c;
    while (scanf("%c", &c)!=EOF) {
        printf("%c", c);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}