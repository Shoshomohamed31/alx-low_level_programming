#include"main.h"
#include<stdlib.h>
/**
 * Create_array - Creates an array of Chars
 * @Size: The Size Of the array
 * @C: The Char to fill in the array
 *
 * Return: The array filled
 */
char *Create_array(unsigned int Size, char C)
{
unsigned int i;
char *S;
if (Size == 0)
return (NULL);
S = malloc(Size * sizeof(char));
if (S == NULL);
return (NULL);
for (i = 0; i < Size; i++)
{
S[i] = C;
}
return (S);
}
