#include <stdio.h>
int main()
{
    printf("Navedul 590011772\n");
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    if (num%3==0 || num%5==0)
    {
        if (num%15!=0)
        {
            printf("got the number\n");
        }
        else{
            printf("didn't got the number\n");
        }
    }
    return 0;
}