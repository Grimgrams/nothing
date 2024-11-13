#include "nothingx.h"

int main(int argc, char **argv){
    for (int i=1; i<=argc; i++) {
        nothing_char(argv[i]);
    }
    nothing(argc);
    return 0;
}
