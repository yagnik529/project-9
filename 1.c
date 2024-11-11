#include <stdio.h>

main()
{

    FILE *even, *odd;
    int i;

    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");

    if (even == NULL || odd == NULL)
    {
        printf("try");
    }

    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(even, "even %d\n", i);
            printf("even %d\n", i);
        }
        else
        {
            fprintf(odd, "odd %d\n", i);
            printf("odd %d\n", i);
        }
    }

    fclose(even);
    fclose(odd);

    printf("done\n");
}

// Develop a Program to generate mark sheets for a student. Enter the marks of 5 students in
// Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes:
// roll_no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each
// student.

#include <stdio.h>

struct student
{
    int roll_no;
    char name[30];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

float calculatePercentage(float chem, float maths, float phy)
{
    return ((chem + maths + phy) / 300.0) * 100;
}

main()
{

    struct student students[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter roll_no ");
        scanf("%d", &students[i].roll_no);
        printf("enter name ");
        scanf("%s", &students[i].name);
        printf("enter chem_marks ");
        scanf("%f", &students[i].chem_marks);
        printf("enter maths_marks ");
        scanf("%f", &students[i].maths_marks);
        printf("enter phy_marks ");
        scanf("%f", &students[i].phy_marks);
    }

    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        float percentage = calculatePercentage(students[i].chem_marks, students[i].maths_marks, students[i].phy_marks);
        printf("\n");
        printf("%s (%d)\n", students[i].name, (students[i].roll_no));
        printf("student chem marks %.2f\n", students[i].chem_marks);
        printf("student maths marks %.2f\n", students[i].maths_marks);
        printf("student phy marks %.2f\n", students[i].phy_marks);
        printf("Percentage: %.2f%%\n\n", percentage);
    }

    printf("\n");
}