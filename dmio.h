#include <stdio.h>

enum OUT_TYPE {
    OUT_INFO = 1,
    OUT_WARN = 2,
    OUT_ERROR = 3,
    OUT_TIP = 4,
};

void print(char* text, enum OUT_TYPE out_type) {
    switch (out_type) {
        case OUT_INFO:
            printf("\x1b[37m%s", text);
            break;
        case OUT_WARN:
            printf("\x1b[33m%s", text);
            break;
        case OUT_ERROR:
            printf("\x1b[31m%s", text);
            break;
        case OUT_TIP:
            printf("\x1b[34m%s", text);
            break;
        default:
            printf("\x1b[37m%s", text);
            break;
    }
}