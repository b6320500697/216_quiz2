#include <stdio.h>
int main()
{
    int number,i,k,d;
    scanf ("%d",&number);
    d=number;
    for(i=2; ;i++)
    {
        if(number==pow(i,3))
        {
            printf ("Not Cube Free");
            break;
        }
    }
    if (number>7);
    {
        d=number+1;
    }
    printf ("%d",d);
    return 0;
}
