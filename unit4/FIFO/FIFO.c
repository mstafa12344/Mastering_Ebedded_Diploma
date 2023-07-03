
#include "FIFO.h"
FIFO_ERROR_Status FIFO_Init(FIFO_BUF_t* fifo_buf,element_type * buf,uint32_t Length)
{
    FIFO_ERROR_Status RetValue = NO_ERROR;
    if((fifo_buf==NULL)||(buf==NULL))
    {
        RetValue = FIFO_NULL;
    }
    else
    {
        fifo_buf->count=0      ;
        fifo_buf->Length=Length;
        fifo_buf->Base = buf   ;
        fifo_buf->Head = buf   ;
        fifo_buf->Tail = buf   ;


    }
    return RetValue;
}
FIFO_ERROR_Status FIFO_Add_Item(FIFO_BUF_t* fifo_buf,element_type item)
{
    FIFO_ERROR_Status RetValue = NO_ERROR;

    if((fifo_buf->Tail==NULL)||(fifo_buf->Head==NULL)||(fifo_buf->Base==NULL))
    {
        RetValue = FIFO_NULL;
    }

    if(fifo_buf->count==fifo_buf->Length)
    {
        RetValue = FIFO_FULL;
    }
    else
    {
        *(fifo_buf->Head)=item;
        fifo_buf->count++;
        if(fifo_buf->Head==(fifo_buf->Base + (fifo_buf->Length*sizeof (element_type))))
        {
            fifo_buf->Head=fifo_buf->Base;
        }
        else
        {
            fifo_buf->Head++;
        }

    }

    return RetValue;

}
FIFO_ERROR_Status FIFO_Get_Item(FIFO_BUF_t* fifo_buf,element_type *item)
{
    FIFO_ERROR_Status RetValue = NO_ERROR;

    if((fifo_buf->Tail==NULL)||(fifo_buf->Head==NULL)||(fifo_buf->Base==NULL))
    {
        RetValue = FIFO_NULL;
    }

    if(fifo_buf->count==0)
    {
        RetValue = FIFO_EMPTY;
    }
    else
    {
        *item = *(fifo_buf->Tail);
        fifo_buf->count--;
        if(fifo_buf->Tail == (fifo_buf->Base + (fifo_buf->Length *sizeof (element_type))))
        {
            fifo_buf->Tail=fifo_buf->Base;
        }
        else
        {
            fifo_buf->Tail++;
        }

    }
    return RetValue;
}
void FIFO_Print(FIFO_BUF_t* fifo_buf)
{
    element_type * temp;

    if(fifo_buf->count==0)
    {
        printf("\nthe fifo is empty\n");
    }
    else
    {
        temp = fifo_buf->Tail;
        for(int i=0;i<fifo_buf->count;i++)
        {
            printf("%d \n",*temp);
            temp++;
        }
    }
}
