#include <stdio.h>
#include <cs50.h>

int main(){
    int n;
    do
    {
        n = get_int("Height: ");
    } while(n > 8 || n < 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0;j < n - 1 - i;j++)
            printf(" ");
        for (int j = 0; j < i + 1; j++)
            printf("#");
        printf("\n");
    }
}



