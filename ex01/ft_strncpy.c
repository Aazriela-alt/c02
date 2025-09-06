char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	
	a = 0;
	while (i < n && src[i] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return dest;
}

