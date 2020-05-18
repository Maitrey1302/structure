//name-Maitrey Pangal
-----------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
struct employee
{
   int emp_no,salary;
    char emp_name[50],department[50];
}e[20];

int main()
{
	int i;
	for(i=0;i<=20;i++)
	{
	    printf("enter a emp_no-\n");
	    scanf("%d",&e[i].emp_no);
	    printf("enter a name-\n");
	    scanf("%s",&e[i].emp_name);
	     printf("enter a salary \n");
	    scanf("%d",&e[i].salary);
	    printf("enter a department\n");
	    scanf("%s",&e[i].department);
	    printf("\n\n");
	}
    
	
}

