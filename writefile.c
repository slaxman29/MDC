#include"header.h"
#include"prototype.h"
int writefile(char a,int fd2)
{	
	int count;
	count=write(fd2,&a,1);
	if(count==-1)
	{
		perror("read");
		exit(EXIT_FAILURE);
	}
//	printf("count:=%d\n",count);	
	return 0;
}
