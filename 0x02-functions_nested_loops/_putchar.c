/**
 * _putchar - writes the charactor the c to stdout
 * @c: The charactor to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and error message is set
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
