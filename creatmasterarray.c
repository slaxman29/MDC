#include"header.h"
#include"declaration.h"
char *creatmasterarray(int fd)
{              
      int i,j,l,flag,ret;
      char *ma,ch;
      ma = NULL;         
      printf(" %s:Begin of function\n",__func__);
      flag=i=0;
      while(1)
      {
      	ret=read(fd,&ch,1);			
	if(ret==-1)
	{
		perror("read");
		exit(EXIT_FAILURE);

        }	
				 
	if(ret==0)
	  	 break;
	if(i>0)
		{			 
			for(j=0;j<=i;j++)
	        	{
			  if(*(ma+j)==ch)
			  flag=1;
			  
	       		}
		}	 
		if(flag==0)
		{	
			ma =(char *)realloc(ma,i+1);
			 *(ma+i)=ch;
		  	i++;
		}
	     	else
			flag=0;		
	}
		*(ma+i) = '\0';
		printf("ma:\t");
		
		for(l=0;l<=i;l++)
		printf("%c",*(ma+l));
		printf("\nFile Closed Successfully\n");

return ma;     
}
	 	


