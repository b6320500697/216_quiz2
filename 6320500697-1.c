#include <stdio.h>
int main()
{
    int number,i,k;
    scanf ("%d",&number);

    for(i=2; ;i++)
    {
        if(number==pow(i,3))
        {
            printf ("Not Cube Free");
            break;
        }
    }
    return 0;
}
