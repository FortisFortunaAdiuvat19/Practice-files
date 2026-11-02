#include "filecomp.h"

amtlist *amtlist_create(){
    
}

void zero(int8 *ptr, int64 size)
{
    int8 *p;
    int64 n;
    for (p = ptr, n = size; n; p++, n--)
        *p = 0;
}

int main()
{
    return 0;
}