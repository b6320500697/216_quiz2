#include <stdio.h>
int main()
{
    int n,i=0,k,j,d;
    scanf ("%d",&n);
    int number[108]={1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99,101,202,303,404,505,606,707,808,909,111,212,313,414,515,616,717,818,919,121,222,323,424,525,626,727,828
    ,929,131,232,333,434,535,636,737,838,939,141,242,343,444,545,646,747,848,949,151,252,353,454,555,656,757,858,959,161,262,363,464,565,666,767,868,969,171,272,373,474
    ,575,676,777,878,979,181,282,383,484,585,686,787,888,989,191,292,393,494,595,696,797,898,999};
    while(1)
    {
        if (n<number[i])
        {
            if(n>=10)
            {
                i=i-1;
                if(n>=number[i])
                {
                    i=i+1;
                }
            }

            break;
        }
        else
        {
            i++;
        }
    }
    printf("%d",i+1);
    return 0;

}
