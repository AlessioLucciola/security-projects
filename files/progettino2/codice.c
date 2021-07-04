#include <stdio.h>
#include <string.h>

#define	MAXSIZE	40
void
test(char *str)
{
	char buf[MAXSIZE];
	if(strlen(str) > MAXSIZE)
		return;
	strcpy(buf, str);				 
	printf("result: %s\n", buf);
}

int
main(int argc, char **argv)
{
	char *userstr;
	if(argc > 1) {
		userstr = argv[1];
		test(userstr);
	}
	int i[10];
	int j = 0;
	while (j < 10000)
	{
		i[j] = 5;				 
		++j;
	}
	for (j = 0; j < sizeof i / sizeof i[0]; ++j)
		printf("Value = %d\n", i[j]);
	return 0;
}

