#include <stdio.h>
int main()
{
    int n,i,k,j;
    scanf ("%d",&n);
    i=9;
    k=9;
    j=90;
    if(n<=10)
    {
        printf ("%d",i);
    }
    else if (n<=100)
    {
        printf ("%d",i+k);
    }
    else
    {
        printf ("%d",i+k+j);
    }
    return 0;

}
