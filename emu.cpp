#include "stdio.h"
#include <fstream>
#include <string>
#include "opcode.hpp"


int main (int argc, char **argv) {
    if (argc < 2) {
        printf ("Fatal error: no input file.\nExec terminated.");
        return 1;

    }

    
    ifstream in_fp (argv [1]);
    if (!in_fp.is_open ()) {
        printf ("Fatal error: cannot open in file.\nExec terminated.");
        return 1;
    }

    
    ifstream out_fp;
    // TODO: change this terrible thing to arg parsing
    if (argc > 3 && !strcmp (argc [2], "-o")) {
        if (!output_fp = fopen (argv [3], "w")) {
            printf ("Fatal error: cannot open out file.\nExec terminated.");
            fclose (input_fp);
            return 1;
        }
    }


    char buf[1024];
    while (size_t len = fread(buf, 1, sizeof(buf), input_fp)) {

    }
    

    fclose (input_fp);
    fclose (output_fp);

    return 0;

}