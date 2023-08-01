#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int     calc(char *n, char *deno, char *nn)
{
    float n1 = atoi(n);
    float n2 = atoi(nn);

    if     (deno[0] == '+')
        return(n1 + n2);
    else if(deno[0] == '-')
        return(n1 - n2);
    else if(deno[0] == 'x')
        return(n1 * n2);
    else if(deno[0] == '/')
        return(n1 / n2);
    else
        return(0);
}

int     main(int argc, char **argv)
{
    if (argc != 4)
    {
        printf("Error\n");
        return(0);
    }

    float res = calc(argv[1], argv[2], argv[3]);
    printf("\n%s %s %s = %.2f\n\n", argv[1], argv[2], argv[3], res);
}