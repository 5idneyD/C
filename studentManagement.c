#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

I am making a student management system.
I have a student struct that contains all information for 1 student.
All students are put into a further struct which can be queried by index, using a 
for loop to find the correct index and return information.

Next stage is to be able to store all students data in a file, which can be queried, instead of a new structure.
I also want to be able to add new students to the file.
Trying not to use third party libraries, so json is out of question.

*/
struct Student
{

    char name[20];
    int age;
    char maths[2];
    char english[2];
    char science[2];
};


int main()
{

    struct Student a = {"John", 16, "A", "B", "C"};
    struct Student b = {"Doe", 16, "C", "A", "B"};

    struct Student students[5];
    students[0] = a;
    students[1] = b;

    while (1)
    {
        printf("What would you like to do:\n\t\t\t1) View Student\n\t\t\t2) Add Student\n\t\t\t3) Quit\n\t\t\tEnter: ");
        int choice;
        scanf_s(" %d", &choice);
        switch (choice)
        {
        case 1:
            printf("\t\t\tEnter Student Name: ");
            char studentName[10];
            scanf_s(" %s", &studentName);
            for (int i = 0; i <= 2; i++)
            {
                if (strcmp(studentName, students[i].name) == 0)
                {
                    printf("%s:\nAge: %d\nMaths: %s\nEnglish: %s\nScience: %s\n",
                           students[i].name, students[i].age, students[i].maths, students[i].english, students[i].science);
                };
            };
            break;
        case 2:
            for (int i = 0; i <= 4; i++)
            {
                if (!students[i].age)
                {
                    // printf("%s\n", students[i].name);
                    char studentName[10];
                    int studentAge;
                    char studentMaths[2];
                    char studentEnglish[2];
                    char studentScience[2];

                    printf("Enter Student Name: ");
                    scanf_s(" %s", &studentName, 10);
                    printf("Enter Student Age: ");
                    scanf_s(" %d", &studentAge);
                    printf("Enter Maths Grade: ");
                    scanf_s(" %s", &studentMaths, 2);
                    printf("Enter English Grade: ");
                    scanf_s(" %s", &studentEnglish, 2);
                    printf("Enter Science Grade: ");
                    scanf_s(" %s", &studentScience, 2);

                    struct Student newStudent = {studentName, studentAge, studentMaths, studentEnglish, studentScience};
                    students[i] = newStudent;
                    printf("%s", studentName);
                    break;
                };
            };
            break;
        case 3:
            exit(0);
            break;
        };
    };

    return 0;
}