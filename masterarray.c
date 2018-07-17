#include"header.h"
#include"prototype.h"
char * masterarray(int fd1)
{	
	fp6=unique;
	fp7=insert;
	int j=0,count,flag=0,fd2;
	char a,*ma,*fnma;
	ma=(char *)malloc(100);
	fnma=(char *)malloc(10);
	printf("Enter the name of file for masterarray:= ");
	scanf("%s",fnma);
	fd2=(*fp4)(fnma);
	lseek(fd1,0,SEEK_SET);
	while(1)
	{
		read(fd1,&a,1);
		if(a==10)
			break;
		flag=(*fp6)(j,a,ma);
		if(flag==1)
			j=(*fp7)(fd2,j,flag,ma,a);
		flag=0;
	}
	close(fd2);
	return ma;
}
