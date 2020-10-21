#include "calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if ((strcmp(argv[3], "-") == 0))
		{
			f(atoi(argv[2]), atoi(argv[4]));
		}
	}
	return (0);

}
