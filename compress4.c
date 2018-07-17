#include"header.h"
#include"declaration.h"
int compress4(int fd ,char *ma)
{	
	unsigned char byt,c;
	char ch;
	int cfd,i,efd;
	cfd = openfile("O_WRONLY");
	efd = openfile("O_WRONLY"); 
	while(1)
	{
 	      	
		c^=c;
		byt^=byt;//xor operation 
		read(fd,&ch,1);
		printf("character is : %c\n",ch);
		if(ch==10)
		{
			break;
		}
		i=findindex(ch,ma);
		printf("index is:%d\n",i);
		c=(char)i;
		c<<=4;
		byt|=c;
		read (fd,&ch,1);
		printf("character is :%c\n",ch);
		if(ch==10)
		{
			byt|=0X0F;
			write(cfd,&byt,1);
			break;
		}
		i=findindex(ch,ma);
		printf("index is:%d\n",i);
		c=(char)i;
		c<<=4;
		c>>=4;
		byt=byt|c;
		write(cfd,&byt,1);
	

	}
	write(efd,ma,strlen(ma));
	close(cfd);
	close(efd);

	
}
