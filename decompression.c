#include"header.h"
#include"prototype.h"
int decompression()
{	
	fp4=openfile;
	fp5=readfile;
	fp9=codelenth;
	fp17=decompression2;
	fp18=decompression3;
	fp19=decompression4;
	fp20=decompression5;
	fp21=decompression6;
	fp22=decompression7;
	int fd1,fd2,sl,cl;
	char *fn,*ek,*a;
	fn=(char *)malloc(20);
	ek=(char *)malloc(20);
	a=(char *)malloc(100);
	printf("Enter the compressed file name and their encriptionkey name\n");
	scanf("%s",fn);
	scanf("%s",ek);
	fd1=(*fp4)(ek);
	fd2=(*fp4)(fn);
	a=(*fp5)(fd1);
	printf("fd1:=%d\n",fd1);
	printf("data of file:=%s\n",a);
	sl=strlen(a);
	cl=(*fp9)(sl);
	printf("codelenthl:=%d\n",cl);
	if(cl==2)
		(*fp17)(fd2,a);
	else if(cl==3)
		(*fp18)(fd2,a);
	else if(cl==4)
		(*fp19)(fd2,a);
	else if(cl==5)
		(*fp20)(fd2,a);
	else if(cl==6)
		(*fp21)(fd2,a);
	else if(cl==7)
		(*fp22)(fd2,a);
	return 0;
}
