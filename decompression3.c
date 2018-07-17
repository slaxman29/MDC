#include"header.h"
#include"prototype.h"
int decompression3(int fd1,char *ma)
{
	fp8=writefile;	
	int i,j,fd;
	unsigned char c,ch,cp,cp1,cp2,cp3,cp4,cp5,cp6,h;
	fd=(*fp4)("decom3");
		printf("fd:=%d\n",fd);
	lseek(fd1,0,SEEK_SET);
	printf("decompression3:=%s\n",ma);
	while(1)
	{
		read(fd1,&ch,1);
//						printf("ch:=%d\n",ch);
		if(ch == 240)
			break;
		cp=ch;	cp1=ch;	cp6=cp;
		ch=ch>>5;
		i=(int)ch;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp=cp<<3;
		cp=cp>>5;
		i=(int)cp;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp6=cp6<<6;
		cp6=cp6>>5;
		read(fd1,&ch,1);
		cp1=ch; cp=ch; cp2=ch;
		if(ch == 240)
			break;
//						printf("ch:=%d\n",ch);
		ch=ch>>7;
		ch=ch|cp6;
		i=(int)ch;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp1=cp1<<1;
		cp1=cp1>>5;
		i=(int)cp1;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp=cp<<4;
		cp=cp>>5;
		i=(int)cp;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp2=cp2<<7;
		cp2=cp2>>5;
		read(fd1,&ch,1);
//						printf("ch:=%d\n",ch);
		if(ch == 240)
			break;
		cp3=ch; cp=ch;
		ch=ch>>6;
		cp2=cp2|ch;
		i=(int)cp2;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp=cp<<2;
		cp=cp>>5;
		i=(int)cp;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp3=cp3<<5;
		cp3=cp3>>5;
		i=(int)cp3;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
	}
	return 0;
}
