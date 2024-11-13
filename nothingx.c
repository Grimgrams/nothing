#include "nothingx.h"

_nothingv nothing(const char nothingx){
    const char *this_does_nothing;
    this_does_nothing = &nothingx;
}

_nothingv nothing_char(char *char_nothing){
    const char *nothing = char_nothing;
}

_nothingi get_value(int val, ...){
    int val_l = val % 10;
    char i2c = (int)val;
    return (val/2);
}
