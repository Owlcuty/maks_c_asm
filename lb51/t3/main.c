#include <stdio.h>
#include <string.h>

int main()
{
	char str[256];
	scanf("%s", str);

	char substr[256];
	scanf("%s", substr);

	int num_sub = 0;

	for (char* cur = strstr(str, substr); cur && cur < str + strlen(str); cur = strstr(cur, substr))
	{
		++cur;
		++num_sub;
	}

	printf("%d\n", num_sub);

	return 0;
}
