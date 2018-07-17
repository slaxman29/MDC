#include"header.h"

int compress3(int fd,char *ma)
{
	printf("%s: begins\n",__func__);
	int (*openfileptr)(char *);
	openfileptr=openfile;
	int (*findindexptr)(char,char *);
	findindexptr=findindex;
	unsigned char ch,chd,byt,c,byt1;
	int cfd,efd,i;
	printf(" %s: begins\n",__func__);
	printf(" %s::Give the name for compress file\n",__func__);
	cfd=openfileptr("O_WRONLY");
	printf(" %s:compressed file opened successfully\n",__func__);
	printf(" %s::Give the name for encrypted file\n",__func__);
	efd=openfileptr("O_WRONLY");
	printf(" %s:encrypted file opened successfully\n",__func__);

	while(1)
	{
		byt ^= byt;
		c ^= c;
		read(fd,&ch,1);
		if(ch==10)
		{	
			c=0x07;
			c <<=5;
			byt |=c;
			write(cfd,&byt,1);		
			break;
		}
		i=findindexptr(ch,ma);
		printf("Value of index is : %d\n",i);
		printf("value of character is : %c\n",ch);
		c=(char)i;
		c <<=5;
		byt |=c;

		read(fd,&ch,1);
		if(ch==10)			
		{
			c=0x07;
			c <<=5;
			c >>=3;
			byt |=c;
			write(cfd,&byt,1);
			break;
		}
		i=findindexptr(ch,ma);
		printf("Value of index is : %d\n",i);
		printf("value of character is : %c\n",ch);
		c=(char)i;
		c <<=5;
		c >>=3;
		byt |=c;

		read(fd,&ch,1);
		if(ch==10)			
		{
			c=0x07;
			c <<=5;
			c >>=6;
			byt |=c;
			write(cfd,&byt,1);
			byt ^= byt;
			c ^= c;
			c=0x07;
			c <<=7;
			byt |=c;
			write(cfd,&byt,1);
			break;
		}
		i=findindexptr(ch,ma);
		printf("Value of index is : %d\n",i);
		printf("value of character is : %c\n",ch);
		c=(char)i;
		chd=c;
		c <<=5;
		c >>=6;
		byt |=c;
		write(cfd,&byt,1);
		byt ^= byt;
		c=chd;
		c <<=7;
		byt |=c;
	
		read(fd,&ch,1);
		if(ch==10)			
		{
			c=0x07;
			c <<=5;
			c >>=1;
			byt |=c;
			write(cfd,&byt,1);
			break;
		}
		i=findindexptr(ch,ma);
		printf("Value of index is : %d\n",i);
		printf("value of character is : %c\n",ch);
		c=(char)i;
		c <<=5;
		c >>=1;
		byt |=c;

		read(fd,&ch,1);
		if(ch==10)			
		{
			c=0x07;
			c <<=5;
			c >>=4;
			byt |=c;
			write(cfd,&byt,1);
			break;
		}
		i=findindexptr(ch,ma);
		printf("Value of index is : %d\n",i);
		printf("value of character is : %c\n",ch);
		c=(char)i;
		c <<=5;
		c >>=4;
		byt |=c;	

		read(fd,&ch,1);
		if(ch==10)			
		{
			c=0x07;
			c <<=5;
			c >>=7;
			byt |=c;
			write(cfd,&byt,1);
			byt ^= byt;
			c ^= c;
			c=0x07;
			c<<=6;
			byt |=c;
			write(cfd,&byt,1);
			break;
		}
		i=findindexptr(ch,ma);
		c=(char)i;
		chd=c;
		c <<=5;
		c >>=7;
		byt |=c;
		write(cfd,&byt,1);
		byt ^= byt;
		c=chd;
		c <<=6;
		byt |=c;

		read(fd,&ch,1);
		if(ch==10)			
		{
			c=0x07;
			c <<=5;
			c >>=2;
			byt |=c;
			write(cfd,&byt,1);
			break;
		}
		i=findindexptr(ch,ma);
		printf("Value of index is : %d\n",i);
		printf("value of character is : %c\n",ch);
		c=(char)i;
		c <<=5;
		c >>=2;
		byt |=c;
		
		read(fd,&ch,1);
		if(ch==10)			
		{
			c=0x07;
			c <<=5;
			c >>=5;
			byt |=c;
			write(cfd,&byt,1);
			break;
		}
		i=findindexptr(ch,ma);
		printf("Value of index is : %d\n",i);
		printf("value of character is : %c\n",ch);
		c=(char)i;
		c <<=5;
		c >>=5;
		byt |=c;
		write(cfd,&byt,1);
	}
	write(efd,ma,strlen(ma));
	close(cfd);
	close(efd);
	printf("%s: ends\n",__func__);
}


















