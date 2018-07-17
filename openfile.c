#include"header.h"
#include"prototype.h"
int openfile(char *fn)
{	
	int fd1;
//	printf("openfilefilename:=%s\n",fn);
	fd1=open(fn,O_RDWR|O_CREAT);
	if(fd1==-1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}	
	
	return fd1;
}
