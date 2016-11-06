#include "define.hpp"
#include "proc_core.hpp"

#define cur_op memory [ereg [EIP]]

int main (int argc, char **argv) {
    FILE *fileptr = NULL;
    int EXIT_STATUS = 0;

    if (argc < 2) {
        puts("Too few arguments. Use: proc <filepath>");
        return 0;
    }

    if ((fileptr = fopen(argv[1], "r")) < 0) {
        puts("Cannot open input file.");
        return 0;
    }

    puts("Loading code... ");
    for (ereg[EIP] = 0; ereg[EIP] < MEMORY_SIZE; ereg[EIP]++) {
        memory[ereg[EIP]] = fgetc(fileptr);
        if (memory[ereg[EIP]] == EOF || memory [ereg [EIP]] == '`')
            break;
    }
    if (ereg[EIP] >= MEMORY_SIZE) {
        puts ("Memory overflow. Aborted.");
        fclose(fileptr);
        delete [] memory;
        return 0;
    }

    puts ("executing...");

    ereg [EIP] = 0;

    while (true) {
        if ()

    }

    printf ("\n\n::Process finished with status %d.\nPress enter to continue", EXIT_STATUS);
    getchar ();
    delete [] memory;
    return 0;




}
