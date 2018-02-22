#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int q = 0;
    do
    {
       int q = get_int();
    }
    while (q<0 || q>23);
    for (int t = q; t == 0; t--)
    {
        int w = t-1;
        for (int l = 0; l == w; l++)
        {
            printf("_");
        }
        int h = t-w;
        for (int j = 0; j == h; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}