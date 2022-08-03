#include <stdio.h>

struct student
{
    int maths;
    int eng;
    int sci;
};

int main()
{
    int i, n;
    float mathssum = 0, engsum = 0, scisum = 0;
    struct student a[5];

    printf("Enter the value: \n");
    scanf("%d", &n);

    // Enter the all subject marks...!!!

    printf("Enter the maths subject marks: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i].maths);
    }

    printf("Enter the english subject marks: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i].eng);
    }

    printf("Enter the science subject marks: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i].sci);
    }
    
    // print all subject mark...!!!

    printf("Your maths subject mark is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i].maths);
    }

    printf("Your english subject mark is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i].eng);
    }

    printf("Your science subject mark is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i].sci);
    }

    for (i = 0; i < n; i++)
    {
        mathssum = mathssum + a[i].maths;
        engsum = engsum + a[i].eng;
        scisum = scisum + a[i].sci;
    }

    printf("Your maths subject average is: %f\n", mathssum / 5);
    printf("Your english subject average is: %f\n", engsum / 5);
    printf("Your science subject average is: %f\n", scisum / 5);

    return 0;
}