#include "lb61lib.h"

size_t parse_argv(int argc, char **argv)
{
	if (argc < 2)
	{
		return 50;
	}

	for (char** cur = argv + 1; cur < argv + argc; ++cur)
	{
		if (strcmp(*cur, "-k") == 0)
		{
			if (cur + 1 >= argv + argc)
			{
				return 50;
			}
			size_t res = (size_t)atoi(*(cur + 1));
			return res;
		}
	}

	return 50;
}

void print_format_text(char *text, size_t len, size_t width)
{
	char *cur = text;
	for (size_t line = 0; line < len / width; ++line)
	{
		fwrite(cur, 1, width, stdout);
		putc('\n', stdout);
		cur += width;
	}
	if (cur < text + len)
	{
		fwrite(cur, 1, text + len - cur, stdout);
		putc('\n', stdout);
	}
}
