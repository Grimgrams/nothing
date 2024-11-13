/**
* @file nothingx.h
* @author Julian Pitterson <julianpitterson@gmail.com>
*/

#ifndef NOTHINGX_H
#define NOTHINGX_H

#define __NOTHING_MAX
#define __NOTHING_MIN

typedef void _nothingv;
typedef int _nothingi;
typedef char _nothingc;

typedef struct{
    _nothingi ngtype_i;
    _nothingc ngtype_c;
} _n_group;


_nothingv nothing(const char nothingx);

_nothingv nothing_char(char *char_nothing);

_nothingi get_value(int val, ...);

#endif //NOTHINGX_H
