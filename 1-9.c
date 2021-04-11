#include <stdio.h>
main()
{
    int c;
    int d;
    d=0;
    while((c=getchar())!=EOF)    
        if (c!=' ')
            putchar(c), d=0;
        else if (c==' ')
            if(d==0)
                putchar(c), d=1;
    return 0;



}