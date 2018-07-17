#include"header.h"
int compress2(int fd ,char *ma)
{	
	printf("begin ch:=====\n");
	unsigned char byt,c,ch;
	int cfd,i,efd;
	int(*openfileptr)(char*);
	openfileptr=openfile;
	
	cfd = openfileptr("O_WRONLY");
	efd = openfileptr("O_WRONLY"); 
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
		printf("value of index is : %d\n",i);
		c=(char)i;
		c<<=6;
		byt|=c;

		read (fd,&ch,1);
		printf("character is :%c\n",ch);
		if(ch==10)
		{
			//byt|=0X0F;
			//write(cfd,&byt,1);
			break;
		}
		i=findindex(ch,ma);
		printf("value of index is : %d\n",i);
		c=(char)i;
		c<<=6;
		c>>=2;
		byt|=c;

		read(fd,&ch,1);
		printf("character is : %c\n",ch);
		if(ch==10)
		{
			break;
		}
		i=findindex(ch,ma);
		printf("value of index is : %d\n",i);
		c=(char)i;
		c<<=6;
		c>>=4;
		byt|=c;

		read(fd,&ch,1);
		printf("character is : %c\n",ch);
		if(ch==10)
		{
			break;
		}
		i=findindex(ch,ma);
		printf("value of index is : %d\n",i);
		c=(char)i;
		c<<=6;
		c>>=6;
		byt|=c;

		write(cfd,&byt,1);
	}	

	write(efd,ma,strlen(ma));
	close(cfd);
	close(efd);

}
