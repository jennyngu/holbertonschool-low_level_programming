/**
 *_strlen - returns the length of a string
 *
 *@s: *s is a pointer that is a char type parameter
 *
 *Return: return 0 if successful
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		return (i);
	}
}
