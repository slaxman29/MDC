#include"header.h"
int decompress2(int cfd ,char *ekey)

{		
	
	unsigned char c,ch;
	int dfd,i;
	int (*openfileptr)(char*);
	openfileptr=openfile;
	printf("Decompress2 function begins\n");
	printf("enter the decompressed file\n");
	dfd=openfile("O_WRONLY");
	while(1)
	{
		if (read(cfd,&ch,1)==0)
		break;
		c^=c;
		c=ch;
		c>>=6;
		i=(int)c;
		printf("index value is:%d\n",i);
		write(dfd,(ekey+i),1);
		
		c=ch;
		c<<=2;
		c>>=6;
		if(c==0x0f)	
		break;
		i=(int)c;
		printf("index value is:%d\n",i);
		write(dfd,(ekey+i),1);
		
		c=ch;
		c<<=4;
		c>>=6;
		if(c==0x0f)	
		break;
		i=(int)c;
		printf("index value is:%d\n",i);
		write(dfd,(ekey+i),1);

		c=ch;	
		c<<=6;
		c>>=6;
		if(c==0x0f)	
		break;
		i=(int)c;
		printf("index value is:%d\n",i);
		write(dfd,(ekey+i),1);
		

	}

	
	printf("End of function",__func__);
	close(dfd);
}
