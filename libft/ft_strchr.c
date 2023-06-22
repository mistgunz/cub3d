

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != 0)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	if (*str == c)
		return (str);
	return (0);
}
