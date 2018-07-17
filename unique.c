#include"header.h"
#include"prototype.h"
int unique(int j,char a,char *ma)
{	
	int i;
	for(i=0;i<=j;i++)
	{
		if(*(ma+i)==a)
		{
			return 0;	
		}
	}
	return 1;
}
