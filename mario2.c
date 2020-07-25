#include <stdio.h>
#include <cs50.h>

int main (void){
    int n;
    int r;
    int c;
    do
    {
        n = get_int("Height: ");
    } while (n > 8 || n < 0);

    for (r = 1 ; r <= n ; r++)
    {
        for (c = 1 ; c <= r ; c++)
        {
            printf ("#");
        }
        printf("\n");
    }
}
