#include "main.h"

/**
 * strip - Remove leading and trailing whitespace from a string.
 * @s: The string to strip.
 *
 * Return: Pointer to the stripped string.
 */
char *strip(char *g)
{
char *end;
if (g == NULL)
return (NULL);
while (*g && isspace((unsigned char)*g))
g++;
end = g + strlen(g) - 1;
while (end > g && isspace((unsigned char)*end))
end--;
*(end + 1) = '\0';
return (g);
}
