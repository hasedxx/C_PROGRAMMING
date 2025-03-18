int sum( int a[], int num )
{
    if(num == 0)
    return 0;
    int add = 0;
    add = a[num - 1] + sum(a, num - 1);
    return add;
}