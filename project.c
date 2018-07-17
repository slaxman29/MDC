#include"header.h"
#include"declaration.h"
int main()
 {
       char ch, *ma,choice;
       int flag,i,j,ret,fd;
       printf("******Multiple Data Compression And Encryption Using Iterative Technique****** \n ");\
       printf("___________MAIN MENU__________ \n");
while(1)
{
       printf ("c:Compression\n");
       printf ("d:Decompression\n");
       printf ("e:EXIT\n");
       printf ("Enter Your Choice\n");
       scanf (" %c",&choice);
       switch (choice)
	{              
	           case 'c': 
			compression();
			break;
     
 		case 'd': 
			 
	       		 printf("Decompression of file\n");
			decompression();
		 	 break;
 	
		case 'e':
		
		        printf("EXIT\n");
			exit(EXIT_SUCCESS);
	}
	 	
 }      
}

