#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Command.h"
#include "Macro.h"

int main(int argc, char* argv[])
{
	int a = -1;
	int b = -1;
	int result = -1;
	char* beforeOperator = NULL;

	switch (argc)
	{
		case 1:
			PRINT_CONSOLE("How to using the about Calculator Program.");
			PRINT_CONSOLE("Commands : [Add, Subtract, Multiply, Divide]");
			PRINT_CONSOLE("ADD : Add two number.");
			PRINT_CONSOLE("SUBTRACT : Subtract two number.");
			PRINT_CONSOLE("MULTIPLY : Multiply two number.");
			PRINT_CONSOLE("DIVIDE : divide two number.");

			return 5;
		case 2:
			PRINT_CONSOLE("How to run: Calculate.exe [ADD / SUBTRACT / MULTYPLY / DIVIDE] [VALUE 1] [VALUE 2]");

			break;
		case 4:
			a = argv[2];
			b = argv[3];

			strcpy(beforeOperator, argv[1]);

			if (strcmp(argv[1], "ADD") == 0)
			{
				result = Add(a, b);
			}
			else if (strcmp(argv[1], "SUBTRACT") == 0)
			{
				result = Subtract(a, b);
			}
			else if (strcmp(argv[1], "MULTIPLY") == 0)
			{
				result = Multiply(a, b);
			}
			else if (strcmp(argv[1], "DIVIDE") == 0)
			{
				result = Divide(a, b);
			}
			else
			{
				PRINT_CONSOLE("How to run: Calculate.exe [ADD / SUBTRACT / MULTYPLY / DIVIDE] [VALUE 1] [VALUE 2]");

				return 5;
			}

			PRINT_CONSOLE(result);

			break;
	}

	if (beforeOperator != NULL)
	{
		free(beforeOperator);
	}

	return 0;
}