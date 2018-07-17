#include"header.h"
#include"prototype.h"
char readfile2(int fd2)
{	
	int count;
	char a;
	count=read(fd2,&a,1);
	if(count==-1)
	{
		perror("read");
		exit(EXIT_FAILURE);
	}
	printf("a:=%c\n",a);	
	return a;
}
