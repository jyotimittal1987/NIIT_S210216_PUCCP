#include <stdio.h>
#include <string.h>

struct student
{
            int id;
            char name[20];
            float percentage;
};
//void func(int a);
void func(struct student record);//Decalaration
int main()
{
            struct student record;

            record.id=1;
            strcpy(record.name, "Raju");
            record.percentage = 86.5;
        //passing structure as a parameter in function
            func(record);
            return 0;
}

void func(struct student record)
{
         //body of the function
            printf(" Id is: %d \n", record.id);
            printf(" Name is: %s \n", record.name);
            printf(" Percentage is: %f \n", record.percentage);
}

