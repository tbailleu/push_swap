#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	while (n > 7)
	{
		n -= 8;
		*((unsigned long long *)(s + n)) = (unsigned long long)0;
	}
	if (n > 3)
	{
		n -= 4;
		*((unsigned int *)(s + n)) = (unsigned int)0;
	}
	if (n > 1)
	{
		n -= 2;
		*((unsigned short int*)(s + n)) = (unsigned short int)0;
	}
	if (n > 0)
	{
		n -= 1;
		*((unsigned char *)(s + n)) = (unsigned char)0;
	}
}
