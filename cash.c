#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main() {

    float d;
    int c;
    int quarter;
    int dime;
    int nickle;
    int penny;
    int total;

    do {
        d = get_float("Change Owed: ");
    } while (d < 0);

    c = round(d * 100);
    quarter = c/25;
    printf("Total Quarters: %i\n", quarter);

    dime = (c%25)/10;
    printf("Total Dimes: %i\n", dime);

    nickle = (c%25%10)/5;
    printf ("Total Nickles: %i\n", nickle);

    penny = (c%25%10%5);
    printf ("Total Pennies: %i\n", penny);

    total = penny + nickle + dime + quarter;
    printf ("Total Coins: %i\n", total);
}



