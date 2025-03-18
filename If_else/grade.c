#include <stdio.h>
int main()
{
    printf("Navedul 590011772\n");
    int per;
    printf("Enter the percentage \n");
    scanf("%d", &per);
    if(per>90 && per<=100)
    {
        printf("Excellent");
    }
    else if(per>80 && per<=90)
    {
        printf("very good");
    }
    else if(per>70 && per<=80)
    {
        printf("good");
    }
    else if(per>60 && per<=70)
    {
        printf("can do better");
    }
    else if(per>50 && per<=60)
    {
        printf("average");
    }
    else if(per>40 && per<=50)
    {
        printf("below average");
    }
    else 
    {
        printf("fail");
    }
    return 0;
}