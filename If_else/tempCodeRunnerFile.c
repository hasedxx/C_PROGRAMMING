#include <stdio.h>
int main()
{
    printf("Navedul Hasan 590011772\n");
    int num1, num2, num3, num4;
    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    printf("Enter the third number\n");
    scanf("%d", &num3);
    printf("Enter the fourth number\n");
    scanf("%d", &num4);

    int max=num1;
    if (num2>max && num3<max && num4<max)
    {
        printf("The number %d is maximum",num2);
    }
    else if (num3>max && num2<max && num4<max)
    {
        printf("The number %d is maximum",num3);
    }
    else if (num4>max && num3<max && num2<max)
    {
        printf("The number %d is maximum",num4);
    }
    else
    {
        printf("The number %d is the greatest", num1);
    }
    return 0;
    

}
