#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float x, y;
    int s, t;

    do
    {
        do
        {
            printf("Please ensure goal number of llamas is greater than starting number of llamas!\n");
            x = get_float("What is the starting number of llamas? ");
            y = get_float("What is the goal number of llamas? ");
        }
        while (x > y);

        t = 0;
        char a;

        while (x < y)
        {
            x = (x + (x / 3) - (x / 4));
            t++;
        }
        printf("Well, considering the number of llamas we are starting with this time, if our goal number is %i llamas, then we are looking at %i years here.\n", (int)y, t);
        do
        {
            a = get_char("Are you okay with these numbers or do you wish to try another set of start and goal number of llamas? Enter 'y' if yes and 'n' if no: ");
            if (a == 'y')
            {
                s = 1;
            }
            if (a == 'n')
            {
                s = 0;
            }
        }
        while (a != 'y' && a != 'n');
    }
    while (s == 1);
    printf("Thank you very much for using our services. Please feel free to reach out to us again when you need us.\n");
    printf("You can also call our hotline +2348028731573 or send an email to samelesh1@gmail.com to book your reservations. Adios!\n");
}