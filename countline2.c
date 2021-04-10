#include <stdio.h>

main()
{
    int c, nl, nb,nt;
    nl=0;
    nb=0;
    nt=0;
    while((c= getchar())!=EOF)
        if (c=='\n')
            ++nl;
        else if (c=='\t')
            ++nl;
        else if (c==' ')
            ++nl;
    printf("%d\n", nl);
}