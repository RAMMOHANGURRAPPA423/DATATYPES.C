#include <stdio.h>
#define MAX 2
struct college
{
    char college_name[20];
   unsigned int no_of_build;
   unsigned int no_of_stud;
}clg_details[MAX];

void clg_det();
void display();
int main()
{
    char college_name[20];
    unsigned int no_of_build;
    unsigned int no_of_stud;
    
    clg_det( college_name, no_of_build,no_of_stud);
    display();
}
void clg_det(char college_name[],int no_of_build,int no_of_stud)
{
    for(int i=0;i<MAX;i++)
    {
        printf("college details are:\n");
        
        printf("enter the clg name: ");
        scanf("%s",clg_details[i].college_name);
        
        printf("enter the no of stds:");
        scanf("%d",&clg_details[i].no_of_stud);
        
        printf("enter the no buildings:");
        scanf("%d",&clg_details[i].no_of_build);
        }
}
void display()
{
         for(int i=0;i<MAX;i++)
         {
          printf("college name=%s\n no of studs=%u\n no of buids=%u\n",clg_details[i].college_name,clg_details[i].no_of_stud,clg_details[i].no_of_build);
          printf("\n");
        }
        
}
