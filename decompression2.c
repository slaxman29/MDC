#include"header.h"
#include"prototype.h"
int decompression2(int fd1,char *ma)
{
	fp8=writefile;	
	int i,j,fd;
	unsigned char c,ch,cp,cp1,cp2,h;
	fd=(*fp4)("decom2");
		printf("fd:=%d\n",fd);
	lseek(fd1,0,SEEK_SET);
	printf("decompression2:=%s\n",ma);
	while(1)
	{
		read(fd1,&ch,1);
//						printf("ch:=%d\n",ch);
		if(ch==192||ch==48||ch==12||ch==3)
			break;
		cp=ch;
		cp1=cp;
		cp2=cp1;
		h=cp;
		ch=ch>>6;
		i=(int)ch;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp=cp<<2;
		cp=cp>>6;
		i=(int)cp;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp1=cp1<<4;
		cp1=cp1>>6;
		i=(int)cp1;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp2=cp2<<6;
		cp2=cp2>>6;
		i=(int)cp2;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
	}
	return 0;
}
