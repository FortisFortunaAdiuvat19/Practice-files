#pragma once
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <assert.h>
#include <errno.h>

typedef unsigned char int8;
typedef unsigned short int16;
typedef unsigned int int32;
typedef unsigned long long int64;

#define $c (char *)
#define $i (int)
#define $v (void *)
#define $1 (int8 *)
#define $2 (int16)
#define $4 (int32)
#define $8 (int64)


#define destroy(x) free((x))
#define alloc(x) malloc((x))

struct s_amtlist
{
    int32 block;
    int32 amt;
    int32 capacity; // included capacity and length for "dynamism"
    int32 length;
};
typedef struct s_amtlist amtlist;

//Constructors
amtlist *amtlist_create(void);
void zero(int8 *, int64);

int main(void);