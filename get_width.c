#include "main.h"

/**
<<<<<<< HEAD
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
=======
 *  get_width - Calculates the width for printing
 *  @format: Formatted string in which to print the arguments
 *  @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 *  Return: width.
 */

>>>>>>> d9c3a55afc9437118ff36aab0b570224cd48cf74
int get_width(const char *format, int *i, va_list list)
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
<<<<<<< HEAD
=======

>>>>>>> d9c3a55afc9437118ff36aab0b570224cd48cf74
			width *= 10;
			width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
<<<<<<< HEAD
=======

>>>>>>> d9c3a55afc9437118ff36aab0b570224cd48cf74
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
<<<<<<< HEAD
=======

>>>>>>> d9c3a55afc9437118ff36aab0b570224cd48cf74
			break;
	}

	*i = curr_i - 1;

	return (width);
}
