
int (*get_print_func(char *s))(int, int)
{
	p_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (ops[i][0] == *s)
			return (ops[i][1]);
		i++;
	}
	return (0);
}
