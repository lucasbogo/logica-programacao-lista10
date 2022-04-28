#include <stdio.h>

// enter with the number of grades to receive the mean of all grades

int main()
{
    char c;

    int integer_grade[100];
    float floting_grade[100];

    int nr_of_grades;
    int i = 0;

        printf("Enter number of grades: ");
        scanf("%d", &nr_of_grades);

        for(i = 0; i < nr_of_grades; i++)
        {

            printf("Enter a int grade: ");
            scanf("%d", &integer_grade[i]);

            printf("Enter a float grade: ");
            scanf("%f", &floting_grade[i]);
        }


    int operation_i = 0;
    float operation_f = 0;


        printf("Enter a character");
        scanf(" %c", &c);

    int n;

        switch(c)
        {
            case 's':
                for (n = 0; n < nr_of_grades; n++)
                {
                    operation_i += integer_grade[n];
                    operation_f += floting_grade[n];
                }

                 printf("Sums are Int: %d Float: %f", operation_i, operation_f);
                 
            case 'p':

                    operation_i = 1;
                    operation_f = 1;


                for (n = 0; n < nr_of_grades; n++)
                {
                    operation_i *= integer_grade[n];
                    operation_f *= floting_grade[n];
                }

                printf("Products are Int: %d Float: %f", operation_i, operation_f);

            default:
                for (n = 0; n < nr_of_grades; n++)
                {
                    operation_i += integer_grade[n];
                    operation_f += floting_grade[n];
                }

                printf("Average is Int: %d Float: %f", operation_i / nr_of_grades, operation_f / nr_of_grades);
        }
        
    return 0;
}
