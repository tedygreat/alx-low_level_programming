#include "main.h"
#include <stdio.h>
#include <unistd.h>
int main(void)
{
		int n = 1;
	       /*n = get_endianness();*/
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
