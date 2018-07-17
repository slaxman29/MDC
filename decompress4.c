#include"header.h"
#include"declaration.h"
int decompress4(int cfd ,char *ekey)

{		
	
	unsigned char c,ch;
	int dfd,i;
	printf("%s Begin of function\n",__func__);
	printf("%sDecompress4 function begins\n");
	printf("enter the decompressed file\n");
	dfd=openfile("O_WRONLY");
	while(1)
	{
		if (read(cfd,&ch,1)==0)
		break;
		if (c==0x0f)
		break;
		c=ch;
		c>>=4;
		i=(int)c;
		printf("%d\n",i);
		write(dfd,(ekey+i),1);
		if (c==0x0f)
		break;
		c=ch;
		c<<=4;
		c>>=4;
		i=(int)c;
		printf("%d\n",i);
		write(dfd,(ekey+i),1);
		
	}
		
	
	printf("%s End of function",__func__);
}
