#include"header.h"
#include"prototype.h"
int decompression7(int fd1,char *ma)
{
	fp8=writefile;	
	int i,j,fd;
	unsigned char c,ch,cp,cp1,cp2,cp3,cp4,h;
	fd=(*fp4)("decom7");
		printf("fd:=%d\n",fd);
	lseek(fd1,0,SEEK_SET);
	printf("decompression7:=%s\n",ma);
	while(1)
	{
		read(fd1,&ch,1);
//						printf("ch:=%d\n",ch);
		if(ch == 240)
			break;
		cp=ch;
		ch=ch>>1;
		i=(int)ch;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp=cp<<7;
		cp=cp>>1;
		cp4=cp;
		read(fd1,&ch,1);
		cp1=ch;
		if(ch == 240)
			break;
//						printf("ch:=%d\n",ch);
		ch=ch>>2;
		ch=ch|cp4;
		i=(int)ch;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp1=cp1<<6;
		cp1=cp1>>1;
		read(fd1,&ch,1);
//						printf("ch:=%d\n",ch);
		if(ch == 240)
			break;
		cp2=ch;
		ch=ch>>3;
		cp1=cp1|ch;
		i=(int)cp1;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp2=cp2<<5;
		cp2=cp2>>1;
		read(fd1,&ch,1);
		cp1=ch;
		if(ch == 240)
			break;
//						printf("ch:=%d\n",ch);
		ch=ch>>4;
		ch=ch|cp2;
		i=(int)ch;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp1=cp1<<4;
		cp1=cp1>>1;
		read(fd1,&ch,1);
//						printf("ch:=%d\n",ch);
		if(ch == 240)
			break;
		cp2=ch;
		ch=ch>>5;
		cp1=cp1|ch;
		i=(int)cp1;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp2=cp2<<3;
		cp2=cp2>>1;
		read(fd1,&ch,1);
		cp1=ch;
		if(ch == 240)
			break;
//						printf("ch:=%d\n",ch);
		ch=ch>>6;
		ch=ch|cp2;
		i=(int)ch;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp1=cp1<<2;
		cp1=cp1>>1;
		read(fd1,&ch,1);
//						printf("ch:=%d\n",ch);
		if(ch == 240)
			break;
		cp2=ch;
		ch=ch>>7;
		cp1=cp1|ch;
		i=(int)cp1;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
		cp2=cp2<<1;
		cp2=cp2>>1;
		i=(int)cp2;
//							printf("i:=%d\n",i);
		c=*(ma+i);	
							printf("%c",c);
		(*fp8)(c,fd);
	}
	return 0;
}
