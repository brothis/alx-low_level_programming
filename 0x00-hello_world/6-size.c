include < stdio.h >
/**
 * main - computer it is compiled and run on.
 * Return: (0)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an in: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(S)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int))
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
