#include <stdio.h>
int main()
{
    printf("Navedul 590011772\n");
    int x1,y1,x2,y2,x3,y3;
    double m1, m2;
    m1=
    printf("Enter the coordinate\n");
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if (m1==m2)
    {
        printf("Straight line can be formed\n");
    }
    else 
    {
        printf("Straight line cannot be formed\n");
    }
    return 0;
}