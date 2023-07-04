
#include "Linked_List.h"
struct SStudent *GPFirst_element = NULL;
void Add_Student(void)
{
    //check if list is empty or not
    //if it is empty
     char text[40];
    struct SStudent *PNew_Student; // initialize pointer to the first element

    if(GPFirst_element == NULL)
    {
        PNew_Student = (struct SStudent*)malloc(sizeof (struct SStudent)); // allocate data to the first element
        GPFirst_element=PNew_Student;
    }
    else
    {
        struct SStudent * PLastStudent;//initialize pointer to navigate the last element
        PLastStudent=GPFirst_element;
        while (GPFirst_element->PNext_element)
            PLastStudent = PLastStudent->PNext_element;

            PNew_Student = (struct SStudent*)malloc(sizeof (struct SStudent)); // allocate data to the first element
            PLastStudent->PNext_element=PNew_Student;
    }
    printf("Enter the ID : ");
    gets(text);
    PNew_Student->student.ID=atoi(text);

    printf("Enter the name : ");
    gets(PNew_Student->student.Name);

    printf("enter the height : ");
    gets(text);
    PNew_Student->student.Height=atof(text);

    PNew_Student->PNext_element=NULL;

}

int delete_student(void)
{
    char text[20];
    int seslected_ID;
    printf("please enter the ID : ");
    gets(text);
    seslected_ID=atoi(text);

    if(GPFirst_element)
    {
        struct SStudent *Pselect   = GPFirst_element;
        struct SStudent *Pprevious =NULL;
        while (Pselect)
        {
            if(Pselect->student.ID==seslected_ID)
            {
                if(Pprevious)
                {
                    Pprevious->PNext_element=Pselect->PNext_element;
                }
                else
                {
                    GPFirst_element=Pselect->PNext_element;
                }
                free(Pselect);
                return 1;
            }
            Pprevious=Pselect;
            Pselect=Pselect->PNext_element;

        }
        
    }  
    printf("\ncan not find the element\n");
    return 0;
}
void View_Student(void)
{
    int count=0;
    struct SStudent *PCurrent_Student = GPFirst_element;
    if(GPFirst_element)
    {
        while (PCurrent_Student)
        {
            printf("======================================");
            printf("\n Student number %d \n",count+1);
            printf("ID: %d\n",PCurrent_Student->student.ID);
            printf("Height: %.2f\n",PCurrent_Student->student.Height);
            printf("Name: %s\n",PCurrent_Student->student.Name);
            printf("======================================\n");
            PCurrent_Student=PCurrent_Student->PNext_element;
            count++;
        }
    } else
    {
        printf("List is empty\n");
    }
}
void delete_all(void)
{
    struct SStudent *PCurrent_Student = GPFirst_element;
    struct SStudent *temp;
    if(GPFirst_element)
    {
        while (PCurrent_Student)
        {
            temp = PCurrent_Student;
            PCurrent_Student=PCurrent_Student->PNext_element;
            free(temp);
        }
        GPFirst_element = NULL;
    }
    else
    {
        printf("List is already empty\n");
    }
}

void GetNth(void)
{
    int count=0,index;
    printf("enter the index: ");
    scanf("%d",&index);
    struct SStudent *PCurrent = GPFirst_element;
    if(GPFirst_element)
    {
        while (PCurrent)
        {
            if(count==index)
            {
                printf("======================================");
                printf("\n Student number %d \n",count+1);
                printf("ID: %d\n",PCurrent->student.ID);
                printf("Height: %.2f\n",PCurrent->student.Height);
                printf("Name: %s\n",PCurrent->student.Name);
                printf("======================================\n");
                break;
            }
            else
            {
                PCurrent=PCurrent->PNext_element;
                count++;
            }
        }
    }
    else
    {
        printf("List is empty\n");
    }

}

void Login(void)
{
    printf("\n=================================================");
    printf("\n choose on the following options ");
    printf("\n1: AddStudent ");
    printf("\n2: Delete Student ");
    printf("\n3: view students ");
    printf("\n4: view nht student ");
    printf("\n5: Delete all ");
    printf("\n enter an option: ");

}