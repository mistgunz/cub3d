

char	*ft_strrchr(const char *s, int c)
{
	char	*i;

	i = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			i = (char *)s;
		s++;
	}
	if (i)
		return (i);
	if (c == '\0')
		return ((char *)s);
	return (0);
}
