#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - print triangle followed by new line
 * @size: triangle size
 * Return: Void
 */

void print_triangle(int size)
{
  int a, b, c, d;

  for (a = 1; a <= size; a++)
    {
      c = size - a;
      d = size - c;

      for (b = 1; b <= c; b++)
	{
	  _putchar(' ');
	}
      for (b = 1; b <= d; b++)
	{
	  _putchar('#');
	}
      _putchar('\n');

    }
  if (size <= 0)
    _putchar('\n');
}
