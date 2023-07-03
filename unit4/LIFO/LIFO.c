//
// Created by mustafa ali on 7/3/2023.
//
#include "stdio.h"
#include "LIFO.h"
LIFO_ERROR_STATUS Lifo_Init(SLifo_buffer* lifo_buf)
{
    LIFO_ERROR_STATUS Return_error_status = LIFO_No_error;
    if(lifo_buf==NULL)
    {
        Return_error_status = LIFO_NULL;
    }
    else
    {
        lifo_buf->count=0; //initialize counter with zero
    }
    return Return_error_status;
}

LIFO_ERROR_STATUS Lifo_Add_Item(SLifo_buffer* lifo_buf,element_type item)
{
    LIFO_ERROR_STATUS Return_error_status = LIFO_No_error;
    if(lifo_buf->count==LIFO_length)
    {
        Return_error_status=LIFO_FULL;
    }
    else
    {
        lifo_buf->arr[lifo_buf->count]=item;
        lifo_buf->count++;
    }
    return Return_error_status;
}

LIFO_ERROR_STATUS Lifo_Get_Item(SLifo_buffer* lifo_buf,element_type *item)
{
    LIFO_ERROR_STATUS Return_error_status = LIFO_No_error;
    if(lifo_buf->count==0)
    {
        Return_error_status=LIFO_EMPTY;
    }
    else
    {
        lifo_buf->count--;
        *item=lifo_buf->arr[lifo_buf->count];
    }
}
LIFO_ERROR_STATUS Lifo_get_Index(SLifo_buffer* lifo_buf,element_type *index)
{
    LIFO_ERROR_STATUS Return_error_status = LIFO_No_error;
    if(lifo_buf->count==0)
    {
        Return_error_status=LIFO_EMPTY;
    }
    else if(lifo_buf->count==LIFO_length)
    {
        Return_error_status=LIFO_FULL;
    }
    else
    {
        *index=lifo_buf->count;
    }
    return Return_error_status;
}
