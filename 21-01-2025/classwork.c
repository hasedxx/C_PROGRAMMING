#include <stdio.h>
int main ()
{
    printf("Navedul Hasan Ahmad   590011772\n");
    int a, b, c;
    int *p, *q, *r;
    a = 8;
    b = 14;
    p = &b;
    q = p;
    r = &c;
    p = &a;
    *q = 10;
    *r = *p;
    *r = a + *q + *&c;

    printf("%d%d%d", a,b,c);
    printf("%d%d%d", *p, *q, *r);
    return 0;
}