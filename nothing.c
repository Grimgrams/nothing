#include "nothingx.h"

int main(int argc, char **argv){
    for (int i=1; i<=argc; i++) {
        nothing(argv[i]);
    }
    nothing(&argc); // dont say shit about this, assholes.
    return 0;
}
