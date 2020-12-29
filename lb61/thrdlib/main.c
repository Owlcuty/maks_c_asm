#include "lb61lib.h"

const size_t LB_MAX_SIZE = 512;

int main(int argc, char **argv)
{
	size_t width = parse_argv_width(argc, argv);

	char *buf = (char*)calloc(LB_MAX_SIZE, 1);
	if (buf == NULL)
	{
		return -1;
	}
	scanf("%[^\n]", buf);

	print_format_text(buf, strlen(buf), width);

	return 0;
}
