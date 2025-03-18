//Write a program to calculate perimeter of rectangle.

#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int len , bre , perimeter;
    printf("Enter the length of the rectangle\n");
    scanf("%d", &len);
    printf("Enter the breadth of the rectangle\n");
    scanf("%d", &bre);

    perimeter = len * bre;
    printf("The area of the rectangle is = %d\n", perimeter);
    return 0;
}