/*C program to read and print employee's record using structure*/
 #include <stdio.h>
 /*structure declaration*/
struct employee{
    char    kname[30];
    int    kempId;
    float   salary;
};
 int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.kname);
    printf("ID ?:");            scanf("%d",&emp.kempId);
    printf("Salary ?:");        scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.kname);
    printf("Id: %d"     ,emp.kempId);
    printf("Salary: %f\n",emp.salary);
    return 0;
 }
