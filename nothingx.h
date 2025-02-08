/**
* @brief
* @since 2025-05-08
* @file nothingx.h
* @author Julian Pitterson
*/

#ifndef NOTHINGX_H
#define NOTHINGX_H

#define __NOTHING_MAX
#define __NOTHING_MIN

typedef void nothingv_t;
typedef int nothingi_t;
typedef char nothingc_t;
typedef unsigned long long nothingi64_t;

typedef struct{
    nothingi_t ngtype_i;
    nothingc_t ngtype_c;
} n_group_t;

nothingv_t nothing(char *nothingx);

nothingi_t get_value(int val, ...);

nothingv_t sm();

#endif //NOTHINGX_H
