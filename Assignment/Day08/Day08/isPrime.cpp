bool isPrime(int n)
{
	bool flag = false;
	if (n <= 1)
		return false;
	for (int i = 2;i <= n / 2;i++)
	{
		if (n % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == 0)
		return true;
	else
		return false;
}



