#include<stdio.h>
#include<string.h>

int main()
{
//sprintf stands for “String print”.
//Instead of printing on console, it store output on char buffer which are specified in sprintf
    int sal;
    char name[30], designation[30], info[60];

    printf("Enter your name: ");
    gets(name);

    printf("Enter your designation: ");
    gets(designation);

    printf("Enter your salary: ");
    scanf("%d", &sal);

    sprintf(info, "Welcome %s !\nName: %s \nDesignation: %s\nSalary: %d",
        name, name, designation, sal);

    printf("\n%s", info);

    // signal to operating system program ran fine
    return 0;
}
