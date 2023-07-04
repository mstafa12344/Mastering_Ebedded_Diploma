
#ifndef DATA_BASE_LINKED_LIST_LINKED_LIST_H
#define DATA_BASE_LINKED_LIST_LINKED_LIST_H
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "conio.h"
/*data of each student*/
struct SData
{
    int   ID;
    float Height;
    char  Name[40];
};

/*node of linked list */
struct SStudent
{
    struct SData student;
    struct SStudent *PNext_element;
};

/*global pointer to point to the first element*/


void Add_Student(void);
int delete_student(void);
void View_Student(void);
void delete_all(void);
void GetNth(void);
void Login(void);
#endif
