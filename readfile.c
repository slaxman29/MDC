#include"header.h"
#include"prototype.h"
char * readfile(int fd1)
{	
	int count;
	char *a;
	a=(char *)malloc(100);
	count=read(fd1,a,100);
	if(count==-1)
	{
		perror("read");
		exit(EXIT_FAILURE);
	}
	printf("count:=%d\n",count);	
	a[count]='\0';
	return a;
}
