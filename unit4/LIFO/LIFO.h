#ifndef LIFO_H_
#define LIFO_H_

#define LIFO_length   10 //number of elements of lifo
#define element_type  int // type of the data


/* struct definition for lifo */
typedef struct
{
  unsigned int count ;
  element_type arr[LIFO_length];

}SLifo_buffer;

/* return type errer status*/
typedef enum
{
    LIFO_No_error,
    LIFO_FULL,
    LIFO_EMPTY,
    LIFO_NULL
}LIFO_ERROR_STATUS;

LIFO_ERROR_STATUS Lifo_Init(SLifo_buffer* lifo_buf);
LIFO_ERROR_STATUS Lifo_Add_Item(SLifo_buffer* lifo_buf,element_type item);
LIFO_ERROR_STATUS Lifo_Get_Item(SLifo_buffer* lifo_buf,element_type *item);
LIFO_ERROR_STATUS Lifo_get_Index(SLifo_buffer* lifo_buf,element_type *index);



#endif