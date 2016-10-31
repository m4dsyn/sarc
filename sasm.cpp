#include "config.hpp"




int main (int argc, char **argv) {
    if (argc < 3) {
        printf ("Fatal error: not enough parameters.\nExec terminated.");
        return 1;
    }

    in_fp = ifstream (argv [1]);
    if (!in_fp.is_open ())
    {
        printf("Cannot open %s file\n", argv [1]);
        return 1;
    }

    out_fp = ofstream (argv [2]);
    if (!out_fp.is_open ()) {
        printf ("Cannot open %s file\n", argv [2]);
        return 1;
    }

    while ()


}
