
#include<stdio.h>
int main ()
{
    ///name
char name[50];
printf("Enter your name: ");
scanf("%s",name);

///id
char id[20];
printf("Enter your id: ");
scanf("%s",id);

///department
char department[50];
printf("Enter your department: ");
scanf("%s",department);


///output

printf("Name: %s\n",name);
printf("Id: %s\n",id);
printf("Department: %s\n",department);
return 0;
}
