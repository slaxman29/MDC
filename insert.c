#include"header.h"
#include"prototype.h"
int insert(int fd2,int j,int flag,char *ma,char a)
{
	fp8=writefile;
	if(flag ==1)
	{
		*(ma+j)=a;
		(*fp8)(a,fd2);
		j++;	
	}	
	return j;
}
