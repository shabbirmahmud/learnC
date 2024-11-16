#include <stdio.h>
#include <ctype.h>
// If the value of integer variable c ranges from 0 to 120, then for how many values of c, toupper(c) == c is true?
int main()
{
    for (int c = 0; c < 121; c++)
    {
        if (toupper(c)==c)
        {
            printf("%d\n", c);
        }
    }
    return 0;
}
// When you apply toupper to the decimal value 96, it returns the same value if the original character is not a lowercase letter. In other words, toupper(96) will return 96 because 96 does not correspond to a lowercase letter in the ASCII character set.On the other hand, when you apply toupper to the decimal value 97, it converts it to the uppercase equivalent. In ASCII, the uppercase letter 'A' has the decimal value 65, so toupper(97) returns 65. 