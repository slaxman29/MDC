#include"header.h"
#include"prototype.h"
int decompression4(int fd1,char *ma)
{
	fp8=writefile;	
	int i,j,fd;
	unsigned char c,ch,cp,h;
	fd=(*fp4)("decom4");
		printf("fd:=%d\n",fd);
	lseek(fd1,0,SEEK_SET);
	printf("decompression4:=%s\n",ma);
	while(1)
	{
		read(fd1,&ch,1);
		printf("ch:=%d\n",ch);
		if(ch == 240||ch==15)
			break;
		cp=ch;
		h=cp;
		ch=ch>>4;
		i=(int)ch;
//		printf("i:=%d\n",i);
		c=*(ma+i);	
		printf("%c",c);
		(*fp8)(c,fd);
		cp=cp<<4;
		cp=cp>>4;
		i=(int)cp;
//		printf("i:=%d\n",i);
		c=*(ma+i);	
		printf("%c",c);
		(*fp8)(c,fd);
	}
	return 0;
}
