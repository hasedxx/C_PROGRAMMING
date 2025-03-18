#include <stdio.h>
int main()
{
    printf("Navedul Hasan Ahmad\n");
    int s1, s2, s3;
    printf("Enter the three sides of the triangle \n");
    scanf("%d%d%d", &s1,&s2,&s3);
    if (s1 +s2 > s3 & s1 + s3 > s2 & s2 + s3 > s1)
    {
        printf("The tringle can be formed\n");
    }
    else
    {
        printf("The triangle cannot be formed\n");
    }
    return 0;
}