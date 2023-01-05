#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
* find_sqrt - return natural squareroot of an int
* @num: int to be squared
* @root: the root
* Return: squareroot of int n
*/
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}
