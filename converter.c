#include <stdio.h>
#include <stdlib.h>

/*
This is a program where I am practicing my skills in C.
The code is not the best of mine but I have learnt different skills that I did not know before this,
such as using switch/case in C and scanf_s being a safer method of reading input. (Also, that you should formot input)

The program simply performs unit conversions for the user.
It asks what type of conversion you want to perform, then specifically which conversion. E.g. Celcius to Farenheit or vice versa.
Then takes an input and returns a converted value.

I may add more conversons in the future, but for now I am happy with how this works.

I am using clang as a compiler
*/


float Temp()
{
    printf("What would you like converted?\n\t\t\t1) Celcius to Farenheit\n\t\t\t2) Farenheit to Celcius\n\t\t\tEnter: ");
    int choice;
    scanf_s(" %d", &choice);

    float result;

    switch (choice)
    {
        float original_value;
    case 1:
        printf("Enter Celcius value: ");
        scanf_s("%f", &original_value);
        result = original_value + 33.8;
        break;

    case 2:
        printf("Enter Farenheit value: ");
        scanf_s("%f", &original_value);
        result = original_value - 33.8;
        break;
    };

    return result;
};

float Curr()
{

    printf("Which Currencies would you like to exchange:\n\t\t\t1) GBP to USD\n\t\t\t2) GBP to EUR\n\t\t\t3) EUR to USD\n\t\t\tEnter: ");
    int choice;
    scanf_s(" %d", &choice);
    float original_value;
    printf("\t\t\tEnter Original Amount: ");
    scanf_s(" %f", &original_value);

    float result;

    switch (choice)
    {
    case 1:
        result = original_value * 1.22;
        break;
    case 2:
        result = original_value * 1.16;
        break;
    case 3:
        result = original_value * 0.99;
        break;
    };

    return result;
};

float Length()
{

    int choice;
    printf("What would you like converted:\n\t\t\t1) Miles to Km\n\t\t\t2) Km to Miles\n\t\t\tEnter: ");
    scanf_s(" %d", &choice);
    float original_value;
    printf("\t\t\tEnter Original Distance: ");
    scanf_s(" %f", &original_value);
    float result;

    switch(choice){

        case 1:
            result = original_value * 1.6;
            break;
        case 2:
            result = original_value / 1.6;
            break;
    };

    return result;
};

int main()
{

    int category;
    printf("Choose a type of conversion:\n\t\t\t1) Tempearture\n\t\t\t2) Currency\n\t\t\t3) Distance\n\t\t\tEnter: ");
    scanf_s(" %d", &category);
    float answer;

    switch (category)
    {

    case 1:
        answer = Temp();
        break;
    case 2:
        answer = Curr();
        break;
    case 3:
        answer = Length();
        break;
    default:
        printf("That was not an option");
        exit(0);
    }

    printf("%0.2f", answer);
    return 0;
};