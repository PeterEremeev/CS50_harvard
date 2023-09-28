#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card = get_long("What is your card number? ");
    int digits = 0;
    long card_length = card;

    while (card_length > 0)
    {
        card_length = card_length / 10;
        digits++;
    }

    if (digits != 13 && digits != 15 && digits != 16)
    {
        printf("INVALID\n");
        return 0;
    }
    int itterated = 0;
    int doubled = 0;
    long temp = card;
    int total;
    int module_1;
    int module_2;
    int fd1;
    int ld2;

    do
    {
        module_1 = temp % 10;
        temp = temp / 10;
        itterated = itterated + module_1;

        module_2 = temp % 10;
        temp = temp / 10;
        module_2 = module_2 * 2;
        fd1 = module_2 % 10;
        ld2 = module_2 / 10;
        doubled = doubled + fd1 + ld2;
    }
    while (temp > 0);

    total = itterated + doubled;

    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    long firstdigits = card;
    while (firstdigits >= 100)
    {
        firstdigits = firstdigits / 10;
    }

    if ((firstdigits >= 51 && firstdigits <= 55) || (firstdigits >= 2221 && firstdigits <= 2720))
    {
        printf("MASTERCARD\n");
    }
    else if (firstdigits == 34 || firstdigits == 37)
    {
        printf("AMEX\n");
    }
    else if (firstdigits / 10 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
