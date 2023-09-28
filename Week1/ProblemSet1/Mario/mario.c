#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    string block = "#";
    string space = " ";
    for (int i = 1; i <= height; i++)
    {
        for (int j = height; j > i; j--)
        {
            printf("%s", space);
        }
        for (int k = 0; k < i; k++)
        {
            printf("%s", block);
        }
        printf("%s%s", space, space);
        for (int l = 0; l < i; l++)
        {
            printf("%s", block);
        }
        printf("\n");
    }
}
