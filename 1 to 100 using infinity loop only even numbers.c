#include<stdio.h>
main()
{
    int i=0;

    for(;;)
    {
        printf(" %d ",i);
        i=i+2;
        if(i>=102)
        {
            break;
        }
    }
}

