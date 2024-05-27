#include <stdio.h>
#include "nothingx.h"

_nothing nothing(const char nothingx){
    const char *this_does_nothing;
    this_does_nothing = &nothingx;
}

_nothing nothing_char(char **char_nothing){
    const char *nothing = char_nothing;
}
