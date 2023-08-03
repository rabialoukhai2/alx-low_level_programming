
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
README.md int i;
README.md unsigned int dec_val = 0;

README.md if (!b)
README.md README.md return (0);

README.md for (i = 0; b[i]; i++)
README.md {
README.md README.md if (b[i] < '0' || b[i] > '1')
README.md README.md README.md return (0);
README.md README.md dec_val = 2 * dec_val + (b[i] - '0');
README.md }

README.md return (dec_val);
}
