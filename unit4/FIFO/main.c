#include <stdio.h>
#include "FIFO.h"
int main()
{
    FIFO_BUF_t Buf1;
    element_type i ,temp;
    element_type buf[7];
    if(FIFO_Init(&Buf1,buf,7)==NO_ERROR)
    {
       // printf("fifo init is done\n");
    }
    for(int i=0;i<3;i++)
    {
        FIFO_Add_Item(&Buf1,i+9);

    }
    FIFO_Print(&Buf1);


}
