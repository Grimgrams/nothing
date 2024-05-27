#include <stdio.h>
#include <string.h>
#include "nothing.h"

_nothing nothing(const char nothingx);

_nothing nothing_char(const char **char_nothing);

int main(int argc, char **argv){
    if (strcmp(argv[1], "author")){
        printf("Author: Grimgrams\nGitHib: https://github.com/Grimgrams\n");
    }
    if(argc > 2){
        printf("gnothing does... nothing.\n");
    } else {
         printf("does nothing.\n");
    }
    return 0;
}

_nothing nothing(const char nothingx){
    const char *this_does_nothing;
    this_does_nothing = &nothingx;
}

_nothing nothing_char(const char **char_nothing){
    const char *nothing = char_nothing;
}
