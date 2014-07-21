// global
#include <stdio.h>
#include <stdlib.h>

char *gbill = "";
int gbob = 1;
int gtom;

void func()
{
    printf("Inside func\n");
    int local=99;
    char * mem = malloc(1000);
}

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3)
    {
        printf("Usage: <prog-name> <input-file> <length-to-read>\nNot enough arguments\n");
        return -1;
    }

    func();

    char *in = argv[1];
    int len = atoi(argv[2]);

    printf("Reading %d bytes from file\n\n", len);    

    FILE *f = fopen(in, "r");
    char *buf = malloc(len+1);
    fread(buf, 1, len, f);
    buf[len] = '\0';

    printf("%s\n\n", buf);
    fclose(f);
}
