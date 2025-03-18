#include <stdio.h>
int main()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int l,a;
    printf("Enter the number of lines\n");
    scanf("%d", &l);

    for( int i = 1; i<=l; i++)
    {
        if (i%2!=0)
        {
            a=1;
        }
        else{
            a=0;
        }
        for( int j = 1; j<=i; j++)
        {
            printf("%d ", a);
            if(a==0)
            a=1;
            else
            a=0;
        }
        printf("\n");
    }
}