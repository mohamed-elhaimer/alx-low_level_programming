#include "main.h"
/**
 *binary_to_uint- convert binary to decimal
 *@b: the binary
 *Return: number en decimal
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	int num;
	unsigned int reslt = 0;
	int power = 0;

	if (b == NULL)
	return (0);
	for (i = strlen(b) - 1 ; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		if (b[i] == '1')
			num = 1;
		else
			num = 0;
		reslt += (num << power);
		power++;
	}
	return (reslt);
}
