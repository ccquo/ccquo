#include "dmio.h"

int main(int argc, char* argv) {
    int RETURN_CODE = 0;

    if (argv[1] == "version") {
        print("Diamond programming language\n", OUT_TIP);
        print("v1.1, (C) Copyright 2024 Ben Daws.\n", OUT_INFO);
        print("MIT License\n", OUT_INFO);
    } else if (argv[1] == "run") {
        if (argv[2] != NULL) {
            print("error: could not open file", OUT_ERROR);
            RETURN_CODE = 1;
        } else {
            print("error: could not open file that is undefined", OUT_ERROR);
            RETURN_CODE = 1;
        }
    } else {
        print("error: argument invalid or missing.", OUT_ERROR);
        RETURN_CODE = 1;
    }

    return RETURN_CODE;
}