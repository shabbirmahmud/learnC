#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[100];
    int upCase = 0, lowCase = 0;

    scanf("%s",s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lowCase++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upCase++;
        }
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (lowCase >= upCase)
        {
            s[i]=tolower(s[i]);
        }
        else
        {
            s[i]=toupper(s[i]);
        }
    }
    printf("%s\n",s);
}