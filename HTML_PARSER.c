#include <stdio.h>
#include <string.h>
void parser(char *str)
{
    int in = 0; // variable to track we are indside tag
    int index = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            in = 0;
            continue;
        }

        if (in == 0)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';

    // removing trailing spaces from beginning
    while (str[0] == ' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }

    // removing trailing spaces from end
    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
}
int main()
{
    char str[] = "<h1> This is a heading </h1>";
    parser(str);
    printf("The parsed string is ~~%s~~\n", str);
    return 0;
}