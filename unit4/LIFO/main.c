#include <stdio.h>
#include "LIFO.h"
int main()
{
    SLifo_buffer x;
    int y;
    Lifo_Init(&x);
    Lifo_Add_Item(&x,44);
    Lifo_get_Index(&x,&y);

    printf("%d\n",y);
    Lifo_Add_Item(&x,44);
    Lifo_get_Index(&x,&y);
    printf("%d",y);
}
