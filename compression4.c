#include"header.h"
#include"prototype.h"
int compression4(int fd1,char *ma)
{	
	int i,fd,j=0,sl;
	unsigned char ch,*fn,c,byt;//,a[]="compression4";
	sl=strlen(ma);
	fd=(*fp4)("com4");
	lseek(fd1,0,SEEK_SET);
	while(1)
	{
		byt=byt^byt;
		read(fd1,&ch,1);
		if(ch==10)
			{
			byt=byt^byt;
			byt=byt|0xF0;
			(*fp8)(byt,fd);
			break;
			}
		for(i=0;i<sl;i++)
		{
			if(ma[i]==ch)
			{
				j=i;
				break;
			}
		}
		sprintf(&c,"%c",j);	
		c=c<<4;
		byt=byt|c;
		read(fd1,&ch,1);
		if(ch==10)
			{
			byt=byt^byt;
			byt=byt|0x0F;
			(*fp8)(byt,fd);
			break;
			}
		for(i=0;i<sl;i++)
		{
			if(ma[i]==ch)
			{
				j=i;
				break;
			}
		}
		sprintf(&c,"%c",j);
		c=c<<4;
		c=c>>4;
		byt=byt|c;
		printf("byt:=%d\n",byt);
		(*fp8)(byt,fd);
	}
	return 0;
}