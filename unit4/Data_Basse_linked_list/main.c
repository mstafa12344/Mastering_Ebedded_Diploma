
#include "Linked_List.h"
void main(void )
{
        char temp1[30];
        int temp;
    while (1)
    {
        Login();
        gets(temp1);
        temp= atoi(temp1);
        switch (temp)
        {
            case 1:Add_Student()   ;break;
            case 2:delete_student();break;
            case 3:View_Student()  ;break;
            case 4:GetNth()        ;break;
            case 5:delete_all()    ;break;
            default:
                printf("\nwrong option");
        }
    }


}