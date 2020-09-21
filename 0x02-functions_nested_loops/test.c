int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
	char tes = 'c';
	_putchar(tes);
	return (0);
}
