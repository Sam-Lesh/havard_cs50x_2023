#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int t;

    do
    {
        string x = get_string("What is your first name? ");
        string y = get_string("What is your last name? ");
        int a = get_int("How old are you? ");
        string b = get_string("What is your phone number? ");
        printf("\n");
        printf("Please find your details below:\n");
        printf("\n");
        printf("Your name is: %s %s\n", x, y);
        printf("You are %i years old\n", a);
        printf("You can be contacted on %s on weekdays only\n", b);
        char z = get_char("Do you agree with the above info? If yes, type 'y' and if no, type 'n': ");
        if (z == 'y')
        {
            t = 0;
        }
        else
        {
            t = 1;
        }
    }
    while (t == 1);
    
    printf("Information submitted and your record is updated.\n");
    printf("Merci beaucoup et bonne journee!\n");
}