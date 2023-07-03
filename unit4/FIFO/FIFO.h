
#ifndef FIFO_FIFO_H
#define FIFO_FIFO_H
#include "stdio.h"
#include "stdint.h"

#define element_type  uint8_t


typedef struct {
    element_type *Base;
    element_type *Head;
    element_type *Tail;
    uint32_t Length;
    uint32_t count;
}FIFO_BUF_t;

typedef enum {
    NO_ERROR,
    FIFO_FULL,
    FIFO_EMPTY,
    FIFO_NULL

}FIFO_ERROR_Status;

/* function take address of the struct , array of buffer and the length*/
FIFO_ERROR_Status FIFO_Init(FIFO_BUF_t* fifo_buf,element_type * buf,uint32_t Length);
FIFO_ERROR_Status FIFO_Add_Item(FIFO_BUF_t* fifo_buf,element_type item);
FIFO_ERROR_Status FIFO_Get_Item(FIFO_BUF_t* fifo_buf,element_type *item);
void FIFO_Print(FIFO_BUF_t* fifo_buf);

#endif //FIFO_FIFO_H
