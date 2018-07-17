#include"header.h"
#include"prototype.h"
char* filename()
{
	char *fn;
	fn=(char *)malloc(5);
	printf("Enter the file name:= ");
	scanf("%s",fn);
	return fn;
}

