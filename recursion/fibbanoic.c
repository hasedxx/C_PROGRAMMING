#include <stdio.h>
int fibo(int a)
{
    if(a==1 || a==2)
    return 1;
    int ans1=fibo(a-1);
    int ans2=fibo(a-2);
    int ans = ans1 + ans2;
    return ans;
}
int main ()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}