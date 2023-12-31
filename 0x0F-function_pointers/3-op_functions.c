#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * op_add - adds two integers
 * @a: a
 * @b: b
 *
 * Return: the sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: a
 * @b: b
 *
 * Return: the substraction
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiple two integers
 * @a: a
 * @b: b
 *
 * Return: the multiplcation
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: a
 * @b: b
 *
 * Return: the division
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the mod of two integers
 * @a: a
 * @b: b
 *
 * Return: the mod
*/

int op_mod(int a, int b)
{
	return (a % b);
}
