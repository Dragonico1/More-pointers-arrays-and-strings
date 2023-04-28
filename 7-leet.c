#include "main.h"

char *leet(char *str)
{
    char leet[] = "aAeEoOtTlL";
    char encode[] = "4433007711";
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; leet[j] != '\0'; j++)
        {
            if (str[i] == leet[j])
            {
                str[i] = encode[j];
                break;
            }
        }
    }
    return str;
}
