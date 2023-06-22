int	ft_atoi(const char *nptr)
{
	int	sign;
	int	sum;
	int	i;

	i = 0;
	sign = 1;
	sum = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		sum *= 10;
		sum += nptr[i] - 48;
		i++;
	}
	return (sum * sign);
}
