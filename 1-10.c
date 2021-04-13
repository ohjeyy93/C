#include <stdio.h>
main()
{
    int c;
    int d;
    d=0;
    while((c=getchar())!=EOF){
        d=0;    
        if (c=='\\'){
            putchar('\\');
            putchar('\\');
            d=1;
        }
        if (c=='\t'){
            putchar('\\');
            putchar('t');
            d=1;
        }
        if (c==' '){
            putchar('\\');
            putchar('b');
            d=1;
        }
        if (d==0)
            putchar(c);
    }
    return 0;



}