#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowercase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
}

int main()
{
    char str1[101], str2[101];
    scanf("%s", &str1);
    scanf("%s", &str2);
    toLowercase(str1);
    toLowercase(str2);

    int compare = strcmp(str1, str2);
    if (compare > 0)
    {
        printf("1\n");
    }
    else if (compare < 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}