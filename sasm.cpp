#include "config.hpp"

char memory [memory_size];

int32_t regs [reg_size];




int main (int argc, char **argv) {
    if (argc < 2) {
        printf ("Fatal error: no input file.\nExec terminated.");
        return 1;

    }
    if (FILE *fp = fopen(argv [1], "r"))
    {
        char buf[1024];
        while (size_t len = fread(buf, 1, sizeof(buf), fp))
            v.insert(v.end(), buf, buf + len);
        fclose(fp);
    }
}