#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_sent(string word);
int count_let(string word);
int count_word(string word);

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_let(text);
    int words = count_word(text);
    int sent = count_sent(text);
    float avlet = ((float) letters / words) * 100;
    float avsent = ((float) sent / words) * 100;

    float sindex = 0.0588 * avlet - 0.296 * avsent - 15.8;
    int index = round(sindex);

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_sent(string word)
{
    int s = 0;
    int txt = strlen(word);
    for (int i = 0; i < txt; i++)
    {
        if (word[i] == '!' || word[i] == '.' || word[i] == '?')
        {
            s += 1;
        }
    }
    return (s);
}

int count_let(string word)
{
    int l = 0;
    int txt = strlen(word);
    for (int i = 0; i < txt; i++)
    {
        if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
        {
            l++;
        }
    }
    return (l);
}

int count_word(string word)
{
    int w = 0;
    int txt = strlen(word);
    for (int i = 0; i < txt; i++)
    {
        if (word[i] == ' ')
        {
            w++;
        }
    }
    return (w + 1);
}
